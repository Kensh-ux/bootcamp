#include <stdio.h>
#include <stdlib.h>

int main(void) {
    void *p;
    int cnt = 0;
    
    // 尝试反复申请 100MB 的空间
    while ( (p = malloc(100 * 1024 * 1024)) ) {
        cnt++;
    }
    
    printf("分配了 %d00MB 的空间\n", cnt);
    return 0;
}

// 操作系统的“验尸报告”。

// 用 dmesg | tail -n 20 查看系统日志，屏幕上打印出来的这些密密麻麻的数字，就是 Linux 内核的 OOM Killer（内存溢出杀手） 在杀死程序时留下的“遗言”。

// 逐行拆解关键信息，看看系统是怎么宣判的：

// 1. 判决时刻
// oom-kill:constraint=CONSTRAINT_NONE,... task=1分配内存\xe6\x8e\xa2\xe7\xa9\xb6,pid=2890,uid=1000
// *   这就是程序（名字叫 `1分配内存探究`，\xe6...是“探究”的Unicode编码）。
// *   `pid=2890` 是被杀进程的 ID。
// *   系统确认了是全局内存不足（`global_oom`）。

// 2. 死亡报告（最核心的数据）
// `Out of memory: Killed process 2890 (...) total-vm:63619979676kB, anon-rss:4300800kB, file-rss:960kB, shmem-rss:0kB, UID:1000 pgtables:2812680kB oom_score_adj:0`
// 这行数据解答了你上一局的疑惑：“它到底申请了多少内存？”
// *   `total-vm:63619979676kB`：虚拟机内存（Virtual Memory）约 63.6 TB。这就是 `while` 循环疯狂 `malloc(100MB)` 申请的字节总数（虚拟内存只是个画饼，系统先答应给你）。
// *   `anon-rss:4300800kB`：实际使用的物理内存（Resident Set Size）约 4.3 GB。这才是真正被吃掉的物理内存。
// *   `pgtables:2812680kB`：页表内存约 2.8 GB。为了管理这 4.3GB 的物理内存，Linux 内核需要建立映射表，映射表本身也吃掉了近 2.8GB 内存
// *   算一下：4.3GB + 2.8GB = 7.1GB。加上 WSL 系统本身占用的内存，正好把 WSL 分配到的总内存彻底榨干。所以 OOM 杀手直接一刀切下了。

// 实验的收获：
// 它证明：
// 1. 虚拟内存 ≠ 物理内存：`malloc` 可以让你无成本地虚拟申请海量地址（63TB）。
// 2. 写内存才是真的吃内存：一旦你试图往这些地址里写入数据，系统就要分配物理页，连同页表一起消耗真正的内存。
// 3. WSL 的边界：你的 WSL 环境最大限制在 7GB 左右。

// 如果你要让代码自己打印出 cnt 再死，需要了解 “缓冲区（Buffer）” 的知识。
// printf 默认是“行缓冲”或者“全缓冲”的。意思是：它不会每执行一次就往屏幕上写，而是攒够一整块内存（比如4KB）再一起输出。当程序被 Killed 时，它攒在肚子里的遗言全丢了。
// 你只需要在你的 while 循环之前加一行代码：

// setbuf(stdout, NULL); // 关闭标准输出的缓冲区
// 或者把 printf 改成专门输出错误的 fprintf(stderr, "当前计数: %d\n", cnt);（错误流默认是不缓冲的）。
// 这样每次循环它都会立刻写屏，程序被杀的瞬间，你就能在屏幕上看到它最后留下的那个数字。
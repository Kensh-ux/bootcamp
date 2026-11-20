#include <stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int m=n;
    int num_last=0;

    int sum=0;
    int number[60]={0};

    for(int i=0; i <n-1; i++)
    {
        for(int j=m; j>0; j--)
        {
            scanf("%d",&number[sum]);
            if(j == m)
            {
                num_last=number[sum];
            }else
            {
                number[sum+m-1] = num_last+number[sum];
                num_last=number[sum];
                if(j != 1)
                {
                    printf("%d ",number[sum+m-1]);
                }
                else if(j == 1 && n != 1)
                {
                    printf("%d\n",number[sum+m-1]);
                }
            }
            sum++;
        }
        m--;
        num_last=0;
    }
    return 0;
}

//这代码能过？scanf放在了内循环，可以说能过完全就是运气，优化一下

#include <stdio.h>

// 根据题目通常的N限制，开大一点，防止越界
// 如果N最大是1000，开1005即可；如果是10000，开10005
#define MAXN 1005 

int a[MAXN]; // 定义在全局，避免栈溢出

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;  //我靠能这么玩。。好像就是scanf("%d",&n); 做了个防御

    // 1. 正常读入初始数组
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // 2. 模拟 N-1 次操作
    // len 表示当前序列的长度，从 n 递减到 2
    for (int len = n; len > 1; len--) {
        int prev = a[0]; // prev 保存 A_i

        for (int i = 0; i < len - 1; i++) {
            int curr = a[i + 1]; // curr 保存 A_{i+1}
            
            // 原地覆盖：当前位置变成 A_i + A_{i+1}
            a[i] = prev + curr;
            
            // 更新 prev，为下一次计算做准备
            prev = curr;

            // 3. 格式化输出
            if (i > 0) printf(" ");
            printf("%d", a[i]);
        }
        printf("\n"); // 每一轮操作结束后换行
    }

    return 0;
}
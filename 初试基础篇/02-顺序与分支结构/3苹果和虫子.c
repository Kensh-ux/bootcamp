#include <stdio.h>

int main() {
    int m, t, s;
    scanf("%d %d %d", &m, &t, &s);

    // 特殊情况：吃一个需要0分钟（题目提示：检查被零除），瞬间全吃完
    if (t == 0) {
        printf("0\n");
    } else {
        // 核心：向上取整计算被咬过/被吃掉的苹果数量
        int eaten = (s + t - 1) / t;
        
        // 如果吃掉的超过了总苹果数，剩下就是0；否则用总数减去吃掉的
        if (eaten >= m) {
            printf("0\n");
        } else {
            printf("%d\n", m - eaten);
        }
    }
    
    return 0;
}
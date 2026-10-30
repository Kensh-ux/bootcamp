#include <stdio.h>

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    int a[105] = {0}; // 0表示在圈内，1表示已出圈
    int cnt = n;      // 剩余人数
    int pos = 1;      // 当前位置（从1开始）
    int step = 0;     // 当前报的数
    
    while (cnt > 0) 
    {
        // 如果当前位置的人还没出圈
        if (a[pos] == 0) 
        {
            step++; // 报数 +1
            
            if (step == m) 
            {
                printf("%d ", pos); // 输出出圈的人
                a[pos] = 1;         // 标记为出圈
                step = 0;           // 重新从1开始报数
                cnt--;              // 剩余人数减少
            }
        }
        
        pos++; // 移动到下一个人
        if (pos > n) 
        {
            pos = 1; // 模拟成环，超过最后一个人就回到第一个
        }
    }
    
    return 0;
}
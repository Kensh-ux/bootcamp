// 给定一批整数，分析每个整数的每一位数字，求出现次数最多的个位数字。
// 例如给定 3 个整数 1234、2345、3456，其中出现最多次数的数字是 3 和 4，均出现了 3 次

#include <stdio.h>

int main()
{
    int N, index, max;
    int a[10], b[1000];

    scanf("%d", &N);
    for(int i = 0; i < N; i ++)
    {
        scanf("%d", &b[i]);
    }

    for(int i = 0; i < N; i ++)
    {
        while(b[i] != 0)
        {
            index = b[i] % 10;
            a[index] ++;
            b[i] /= 10;
        }
    }

    max = a[0];
    for(int i = 0; i < 10; i ++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    printf("%d:", max);

    for(int i = 0; i < 10; i ++)
    {
        if(a[i] == max)
        {
            printf(" %d", i);
        }
    }
    printf("\n");

    return 0;
}
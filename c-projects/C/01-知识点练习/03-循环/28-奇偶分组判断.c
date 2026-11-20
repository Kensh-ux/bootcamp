#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, k1, k2;//k1偶数，k2奇数
    scanf("%d %d %d", &n, &k1, &k2);

    int odd_cnt = 0;
    for (int i = 0; i < n; i++) 
    {
        int a;
        scanf("%d", &a);
        if (a % 2 != 0) 
        {
            odd_cnt++;
        }
    }

    if (n < k1 + k2)
    {
        printf("NO\n");
        return 0;
    }

    if (odd_cnt < k2)
    {
        printf("NO\n");
        return 0;
    }

    if ((odd_cnt - k2) % 2 != 0)
    {
        printf("NO\n");
        return 0;
    }

    printf("YES\n");
    return 0;
}
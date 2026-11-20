#include <stdio.h>

int main()
{
    double n;
    double e, item;
    e = 0;

    scanf("%lf", &n);
    for(int i = 1; i <= n + 1; i ++)
    {
        item = 1;
        for(int j = 1; j < i; j ++)
        {
            item *= j;
        }
        e += 1 / item;
    }

    printf("%.8f\n", e);

    return 0;
}
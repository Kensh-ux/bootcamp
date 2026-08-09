#include <stdio.h>

int main()
{
    int lower, upper;
    int fahr = 0;
    double celsius = 0;
    scanf("%d %d", &lower, &upper);
    if(lower > upper)
        printf("Invalid.\n");
    else
    {
        printf("fahr celsius\n");
        for(fahr = lower; fahr <= upper; fahr = fahr + 2)
        {
            celsius = 5 * (fahr - 32)/9.0;
            printf("%d%6.1f\n", fahr, celsius);
        }
    }

    return 0;
}
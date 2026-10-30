#include <stdio.h>

void select_sort(int a[], int n)
{
    int temp;
    for(int i = 0; i < n - 1; i ++)
    {
        int minid = i;
        for(int j = i + 1; j < n; j ++)
        {
            if(a[j] < a[minid])
            {
                minid = j;
            }
        }
        temp = a[minid];
        a[minid] = a[i];
        a[i] = temp;
    }
}

int main(void)
{
    int n, a[8];
    int i;
    
    printf("Enter n(n <= 8):");
    scanf("%d", &n);
    printf("Enter a[%d]:", n);
    for(i = 0; i < n; i ++)
        scanf("%d", &a[i]);
    select_sort(a, n);
    printf("After sorted, a[%d] = ", n);
    for(i = 0; i < n; i ++)
        printf("%3d", a[i]);
    
    return 0;
}
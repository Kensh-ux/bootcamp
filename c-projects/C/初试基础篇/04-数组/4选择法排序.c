#include <stdio.h>

int main(){
    int n, max;
    int i, j;
    int a[10];

    scanf("%d", &n);
    for(int i = 0; i < n; i ++)
    {
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < n - 1; i ++)
    {
        max = i;
        for(j = i + 1; j < n; j ++)
        {
            if(a[max] < a[j])
                max = j;
        }
        if(i != max)
        {
            int temp = a[i];
            a[i] = a[max];
            a[max] = temp;
        }
    }

    for(int i = 0; i < n; i ++)
    {
        printf("%d", a[i]);
        if(i != n - 1)
            printf(" ");
    }

    return 0;
}
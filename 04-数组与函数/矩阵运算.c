#include <stdio.h>

int main(){
    int n;
    int a[10][10];
    int sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < n; j ++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < n; j ++)
        {
            if(i + j != n - 1 && i != n - 1 && j != n - 1)
            {
                sum += a[i][j];
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
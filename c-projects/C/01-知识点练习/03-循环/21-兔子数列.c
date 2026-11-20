#include <stdio.h>

int main(){
    int x1, x2, tmp, n, month;

    scanf("%d", &n);
    x1 = x2 = 1;
    if(n == 1)
        month = 1;
    else
    {
        month = 2;
        while(x2 < n)
        {
            tmp = x1 + x2;
            x1 = x2;
            x2 = tmp;
            month ++;
        }
    }
    
    printf("%d", month);
    
    return 0;
}
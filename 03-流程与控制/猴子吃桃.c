#include <stdio.h>

int main(){
    int n;
    int x;

    x = 1;
    scanf("%d", &n);
    while(n > 1)
    {
        x = (1 + x) * 2;
        n --;
    }

    printf("%d", x);
    
    return 0;
}
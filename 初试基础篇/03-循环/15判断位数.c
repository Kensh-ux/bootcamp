#include <stdio.h>

int main() {
    int x;
    int n=0;
    
    printf("请输入数字。\n");
    scanf("%d", &x);
    
    n++;
    x/=10;

    while(x > 0){
        printf("hr%d\n",n);
        n++;
        x/=10;
        printf("%d %d\n",x,n);
    }

    printf("%d\n",n);

    return 0;
}
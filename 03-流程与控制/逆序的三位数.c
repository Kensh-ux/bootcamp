#include <stdio.h>

int main(){
    int total=0;
    scanf("%d",&total);

    int a=total/100;
    int b=total%10;
    int c=total%100/10;
    
    printf("%d\n",b*100+c*10+a);
    
    return 0;
}
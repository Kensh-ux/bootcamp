#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int fact = 1;

    int i=1;
    for(i=n;i>1;i--){
    fact *= i;
}
    /*int i = n;
    for( ;n>1;n--){
        fact *= n;
    }
        */
    printf("%d!=%d",n,fact);

    return 0;
}
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    int m = a%2 == 0;
    int n = a>4 && a <=12 ;

    if(m && n){
        printf("1 1 0 0");
    }else if(m && !n){
        printf("0 1 1 0");
    }else if(!m && n){
        printf("0 1 1 0");
    }else{
        printf("0 0 0 1");
    }

    return 0;
}
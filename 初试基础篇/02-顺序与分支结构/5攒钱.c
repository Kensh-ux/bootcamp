#include <stdio.h>

int main(){
    int money=300;
    int n=0;
    int total=0;
    int e=0;
    for(int i=1;i<13;i++){
        scanf("%d",&n);
        total = total+money-n;
        int t=total;
        
        if(t >= 100){
            e =e+(t/100)*100;
            total =total-(t/100)*100;
        }else if(t<0){
            printf("%d",-i);
            return 0;
        }
    }
    int j=e/5;
    printf("%d",total+e+j);
    return 0;
}
#include <stdio.h>

int main(){
    int x = 2;
    int cnt = 0;  // 新增变量：用于记录已经找到的素数个数

while(cnt < 50){
        int i;
        int isPrime=1;
        // 内层逻辑与之前完全一样
        for(i=2 ; i<x ; i++){
            if(x % i == 0){
                isPrime = 0;
                break;
            }
        }
    if(isPrime == 1){
        printf("%d\n",x);
        cnt++;
    }
    x++;
}    
printf("\n");

    return 0;
}
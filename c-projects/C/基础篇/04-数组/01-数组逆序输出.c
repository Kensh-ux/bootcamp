#include <stdio.h>
int main(){
    int a[101]={0};

    for(int i=0; i<101; i++){
        scanf("%d", &a[i]);
        if(a[i]==0){
            break;
        }
    }

    for(int j=100; j>=0; j--){
        if(a[j]==0){
            continue;
        }
        if(j != 0){
            printf("%d ", a[j]);
        }else{
            printf("%d", a[j]);
        }
    }
    return 0;
}
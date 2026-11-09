#include <stdio.h>
int main(){
    int apple[10];
    int tall;
    int count = 0;

    for(int i=0;i < 10;i++){
        scanf("%d",&apple[i]);
    }
    scanf("%d",&tall);

    for(int j=0;j < 10;j++){
        if(apple[j] <= tall+30){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
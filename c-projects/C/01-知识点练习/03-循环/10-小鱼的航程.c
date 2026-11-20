#include <stdio.h>
int main(){
    int day;
    int ts;
    scanf("%d",&day);
    scanf("%d",&ts);

    int total=0;
    while(ts != 0){
        if(day > 7){
            day =1;
        }

        if(day > 5){
            total =total;
        }else{
            total +=250;
        }

        day++;
        ts--;
    }
    printf("%d",total);
    return 0;
}
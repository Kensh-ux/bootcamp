#include <stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);

    int min=10;
    int max=0;
    int score=0;
    double sum=0;
    for(int i=0; i<n; i++){
        scanf("%d",&score);
        
        if(score > max){
            max = score;
        }else if(score < min){
            min = score;
        }
        sum +=score;
    }

    sum = sum-min-max;

    printf("%.2f",sum/(n-2));
    return 0;
}
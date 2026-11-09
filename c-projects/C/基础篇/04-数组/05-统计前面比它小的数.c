#include <stdio.h>
int main(){
    
    int total_0;
    scanf("%d", &total_0);
    int total[total_0];

    for(int i=0; i<total_0; i++) {
    total[i] = 0;    
    }

    for(int j=0; j<total_0; j++){
        scanf("%d", &total[j]);
        int count = 0;
        for(int k=j; k>=0; k--){
            if(total[j] > total[k]){
                count++;
            }
        }
        if(j !=total_0){
            printf("%d ", count);
        }else{
            printf("%d", count);
        }
    }
    return 0;
}
#include <stdio.h>

int main() {
    int m,n;
    scanf("%d %d", &m, &n);

    int number[10] ={0};
    
    for(int i=m; i<=n; i++){
        
        int mask = 1;
        int t = i;//备份原数字
    
        while(t > 9){
            t /= 10;
            mask *= 10;
        }

        int x=i;
        do{
            int d = x/mask;
            number[d]++;
            x %= mask;
            mask /= 10;
        }while(mask > 0);
    }

    for(int i=0; i<10; i++){
        printf("%d ", number[i]);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum[500] = {0};
    sum [0] = n;
    for (int i = 1; n > 0; i++){
        if(n % 2 == 0){
            n /= 2;
            sum[i] = n;
        }else if(n %2 != 0 && n != 1){
            n = n*3 + 1;
            sum[i] = n;
        }else if(n == 1){
            break;
        }
    }

    for(int i =499;i >= 0;i--){
        if(sum[i] != 0){
            printf("%d ", sum[i]);
        }
    }
    return 0;
}
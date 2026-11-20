#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a;          
    int prev;       
    int sum = 1;    
    int sum_max = 1; 
    
    scanf("%d", &prev);
    
    for (int i = 1; i < n; i++) {
        scanf("%d", &a);
        
        if (a == prev + 1) {
            sum++;
        } else {
            if (sum > sum_max) {
                sum_max = sum;
            }
            sum = 1; 
        }
        
        prev = a;
    }
    
    if (sum > sum_max) {
        sum_max = sum;
    }
    
    printf("%d\n", sum_max);
    return 0;
}
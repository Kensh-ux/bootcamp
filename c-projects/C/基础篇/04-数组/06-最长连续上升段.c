#include <stdio.h>

// 将数组定义在主函数外（全局区），空间非常大，不会爆栈
int a[1000005]; 

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int count = 1, max = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i-1]) {
            count++;
            if (count > max) max = count;
        } 
        else {
            count = 1;
        }
    }
    printf("%d\n", max);
    return 0;
}
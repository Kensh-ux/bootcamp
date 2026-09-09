#include <stdio.h>

// 定义两个数组，用来存当前阶乘和总和
// 由于50!有65位，开100
int a[100] = {0};
int sum[100] = {0};

int main() {
    int n;
    scanf("%d", &n);
    
    a[0] = 1; // 1! 初始为 1
    
    for (int i = 1; i <= n; i++) {
        
        // 第一步：计算阶乘 a = a * i
        for (int j = 0; j < 100; j++) {
            a[j] *= i;
        }
        // 处理进位
        for (int j = 0; j < 99; j++) {
            if (a[j] >= 10) {
                a[j+1] += a[j] / 10; // 进位加到下一位
                a[j] %= 10;          // 当前位只留余数
            }
        }
        
        // 第二步：累加和 sum = sum + a
        for (int j = 0; j < 100; j++) {
            sum[j] += a[j];
        }
        // 处理进位
        for (int j = 0; j < 99; j++) {
            if (sum[j] >= 10) {
                sum[j+1] += sum[j] / 10;
                sum[j] %= 10;
            }
        }
    }
    
    // 第三步：从最高位开始，倒序输出
    int top = 99;
    while (top > 0 && sum[top] == 0) {
        top--; // 找到第一个不是 0 的最高位
    }
    
    for (int i = top; i >= 0; i--) {
        printf("%d", sum[i]);
    }
    
    return 0;
}
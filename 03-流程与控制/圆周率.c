#include <stdio.h>

int main() {
    double eps;
    scanf("%lf", &eps);
    
    // sum 初始包含第一项 1
    double sum = 1.0;
    // term 从第一项开始
    double term = 1.0;
    
    // 这里的 n 最好定义成 double 防止除成整数
    double n = 1.0; 
    
    // 循环找下一项
    while (1) {
        // 递推公式计算下一项
        term = term * n / (2 * n + 1);
        
        // 题目说“直到最后一项的值小于阈值”，但“最后一项”本身也是需要加进去的
        // 所以先加上这一项，再判断要不要停
        sum = sum + term;
        
        if (term < eps) {
            break; // 如果加了这一项之后发现它小于阈值，就停下
        }
        
        n++; // 准备计算下一项
    }
    
    // 题目给的是 π/2 的公式，所以要乘 2
    printf("%.6f\n", 2 * sum);
    
    return 0;
}
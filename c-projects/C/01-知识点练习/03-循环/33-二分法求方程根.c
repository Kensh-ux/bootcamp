#include <stdio.h>

// 写一个函数，用来计算多项式的值
// 参数 a3,a2,a1,a0 放在这里，x 也是参数
double f(double x, double a3, double a2, double a1, double a0) {
    return a3 * x * x * x + a2 * x * x + a1 * x + a0;
}

int main() {
    double a3, a2, a1, a0;
    scanf("%lf %lf %lf %lf", &a3, &a2, &a1, &a0);
    
    double a, b;
    scanf("%lf %lf", &a, &b);

    // 二分法主体
    // 设定一个精度阈值（题目没说具体多少，一般用 1e-6 或 1e-7 即可）
    double eps = 1e-6; 
    
    while (b - a > eps) { // 只要区间长度还大于阈值，就继续循环
        double mid = (a + b) / 2.0; // 计算中点
        
        double f_mid = f(mid, a3, a2, a1, a0);
        double f_a = f(a, a3, a2, a1, a0);
        
        if (f_mid == 0) {
            break;
        }
        
        // 判断同号：相乘大于 0 说明同号
        if (f_mid * f_a > 0) {
            // 说明根在右半边
            a = mid; 
        } else {
            // 说明根在左半边
            b = mid;
        }
    }

    printf("%.2f\n", (a + b) / 2.0);
    
    return 0;
}
#include <stdio.h>
#include <math.h> // 必须引入数学库，才能使用 sqrt() 开平方

int main() {
    double a, b, c; // 建议用 double 代替 float，精度更高
    scanf("%lf %lf %lf", &a, &b, &c);
    
    // 1. 计算周长的一半 p
    double p = (a + b + c) / 2.0;
    
    // 2. 使用海伦公式求面积（注意要开根号 sqrt）
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    
    // 3. %.1f 会自动帮你把结果四舍五入并保留 1 位小数，根本不需要你写 while 循环去凑
    printf("%.1f\n", area);
    
    return 0;
}
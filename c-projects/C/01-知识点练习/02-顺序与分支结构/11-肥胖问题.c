//https://www.luogu.com.cn/problem/P5714

#include <stdio.h>

int main() 
{
    double m, h;
    scanf("%lf %lf", &m, &h);
    
    double bmi = m / (h * h); 
    
    if (bmi < 18.5) 
    {
        printf("Underweight\n");
    } else if (bmi < 24) 
    {
        printf("Normal\n");
    } else 
    {
        printf("%.6g\n", bmi); 
        printf("Overweight\n");
    }
    
    return 0;
}
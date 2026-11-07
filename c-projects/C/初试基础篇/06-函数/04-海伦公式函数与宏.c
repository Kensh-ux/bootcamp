#include <stdio.h>
#include <math.h>
#define S (((a) + (b) + (c)) / 2.0)
#define AREA (sqrt((S) * ((S) - (a)) * ((S) - (b)) * ((S) - (c))))

double f(double a, double b, double c);

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    printf("F = %f, f = %f", AREA, f(a, b, c));
    return 0;
}

double f(double a, double b, double c)
{
    double area, s;
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    return area;
}
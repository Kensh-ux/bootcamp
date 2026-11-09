//输入两个整数，求这两个数的最大公约数和最小公倍数。

#include <stdio.h>
int main()
{
    int a,b,m,n,t;
    scanf("%d %d",&m,&n);

    a=m;
    b=n;

    while(b != 0)
    {
        t = a%b;
        a = b;
        b = t; 
    }

    printf("%d %d",a,m*n/a);
    return 0;
}
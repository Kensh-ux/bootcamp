//https://www.luogu.com.cn/problem/P5717

#include <stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(a>c)
	{
		t=a;
		a=c;
		c=t;
	}
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	if(a+b <= c) 
    {
        printf("Not triangle\n");
        return 0;
    }
    if(a*a + b*b == c*c) printf("Right triangle\n");
	if(a*a + b*b > c*c) printf("Acute triangle\n");
	if(a*a + b*b < c*c) printf("Obtuse triangle\n");
    if(a == b || b == c || a == c ) printf("Isosceles triangle\n");
    if(a == b && b == c) printf("Equilateral triangle\n");
	
	return 0;
} 

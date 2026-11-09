//https://www.luogu.com.cn/problem/P1075

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int a=2; a*a<=n; ++a)
	{
	    if(n % a == 0)
		{
			printf("%d\n",n/a);
			return 0;
		}
	}
	
	return 0;
}

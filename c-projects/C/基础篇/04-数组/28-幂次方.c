//https://www.luogu.com.cn/problem/P1010

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	 int count=0;
	 int temp=1;
	 
	 while(n > 0)
	 {
	 	while(temp<n)
	 	{
	 		temp = temp*2;
	 		count++;
	 	}
		temp /= 2;
		n -= temp;
	 }
	
	
	return 0;
}

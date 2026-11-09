//https://www.luogu.com.cn/problem/P5723

#include <stdio.h>
int main()
{
	int L;
	scanf("%d",&L);
	
	int sum=0,count=0;
	
		for(int num=2;; ++num)
		{
			int is_prime=1;
			for(int i=2; i*i<=num; ++i)
			{
				if(num%i == 0)
				{
					is_prime=0;
					break;
				}
			}
			
			if(is_prime == 1)
			{
				if(sum + num > L) break;
				printf("%d\n",num);
				sum = sum+num;
				count++;
			}
		}	
	
	printf("%d",count);
	return 0;
}


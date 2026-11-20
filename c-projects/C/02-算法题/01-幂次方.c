//https://www.luogu.com.cn/problem/P1010

#include <stdio.h>

void dfs(int n) 
{
    int first = 1; //用于标记是不是输出的第一项，第一项前面不需要加号
    
    //n最大是20000，2^14 = 16384，2^15 = 32768，所以从14循环到0就足够了
    for (int i = 14; i >= 0; i--) 
	{
        //利用位运算，判断 n 的二进制表示中第 i 位是不是 1
        //相当于判断 n 里面是否包含2的i次方
        if ((n >> i) & 1) 
		{
            //如果不是第一项，打印加号
            if (!first) 
			{
                printf("+");
            }
            first = 0; //标记第一项已经输出过了
            
            //根据指数的不同情况输出
            if (i == 0) 
			{
                printf("2(0)");
            } else if (i == 1) 
			{
                printf("2");
            } else 
			{
                //如果指数大于1，递归处理这个指数 i
                printf("2(");
                dfs(i);//开始递归
                printf(")");
            }
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);

    dfs(n); //直接从n开始递归
	
    printf("\n");
    return 0;
}
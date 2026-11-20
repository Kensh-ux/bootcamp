//https://www.luogu.com.cn/problem/P1068

#include <stdio.h>

void q_sort(int p_count[], int person[], int l, int r);

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    int person[5005];//号码
    int p_count[5005];//分数 
    
    for(int i = 0; i < n; ++i)
    {
        scanf("%d %d", &person[i], &p_count[i]);
    }
    
    q_sort(p_count, person, 0, n - 1);//调用快排 (升序)
    
    int temp = m * 3 / 2;
    int count = 0;
    
    //计算进入面试的实际人数和分数线
    for(int i = 0; i < n; ++i)
    {
        if(p_count[i] >= p_count[n - temp]) count++;
    }
    
    printf("%d %d\n", p_count[n - temp], count);
    
    // 因为数组是升序排列的，所以从后往前输出
    for(int i = n - 1; i >= n - count; --i)
    {
        printf("%d %d\n", person[i], p_count[i]);
    }
    return 0;
}

void q_sort(int p_count[], int person[], int l, int r)
{
    if(l >= r) return;
    
    int i = l - 1, j = r + 1;
    int x = p_count[(l + r) / 2];//基准分数
    int y = person[(l + r) / 2];//基准号码
    
    while(i < j)
    {
        //分数小，或者分数相等但号码大，则继续往右找
        do i++; while(p_count[i] < x || (p_count[i] == x && person[i] > y));
        
        //分数大，或者分数相等但号码小，则继续往左找
        do j--; while(p_count[j] > x || (p_count[j] == x && person[j] < y));
        
        if(i < j)
        {
            //交换分数
            int t = p_count[i];
            p_count[i] = p_count[j];
            p_count[j] = t;
            
            //交换号码
            int te = person[i];
            person[i] = person[j];
            person[j] = te;
        }
    }
    
    q_sort(p_count, person, l, j);
    q_sort(p_count, person, j + 1, r); 
}

//6 3
//1000 90
//3239 88
//2390 95
//7231 84
//1005 95
//1001 88
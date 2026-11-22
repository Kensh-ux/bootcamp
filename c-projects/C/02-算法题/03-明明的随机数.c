//https://www.luogu.com.cn/problem/P1059

//很粗糙的自己写的
#include <stdio.h>

int a[105];
void quick_sort(int q[], int l, int r);

int main() 
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    quick_sort(a, 0, N - 1);

    int k=0,M=N;;
    for(int i=1; i<N; ++i)
    {
        if(a[k] == a[i])
        {
            a[k] = 0;
            M--;
        }
        k++;
    }

    printf("%d\n", M);
    for (int i = 0; i < N; i++)
    {
        if(a[i] != 0)
        {
            printf("%d ", a[i]);
        }
        
    }
    printf("\n");
    
    return 0;
}

void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;

    int i = l - 1, j = r + 1;
    int x = q[(l + r) / 2];
    
    while (i < j)
    {
        do i++; while (q[i] < x);
        do j--; while (q[j] > x);
        if (i < j) 
        {
            int temp = q[i];
            q[i] = q[j];
            q[j] = temp;
        }
    }
    
    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}

//快排+双指针，C++ std::unique 函数底层的真实实现原理
#include <stdio.h>

int a[105];
void quick_sort(int q[], int l, int r);

int main() 
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) scanf("%d", &a[i]);

    quick_sort(a, 0, N - 1);

    // 优化点 1：双指针去重法
    int M = 1; // M 既是不重复元素的个数，也是下一个不重复元素要放的位置
    for(int i = 1; i < N; ++i)
    {
        // 如果当前的数和上一个放进数组的数不一样，就把它挪过来
        if(a[i] != a[M - 1]) 
        {
            a[M] = a[i];
            M++;
        }
    }

    printf("%d\n", M);
    // 优化点 2：不需要判断是否为 0 了，直接输出前 M 个
    for (int i = 0; i < M; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}

void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;
    int i = l - 1, j = r + 1;
    int x = q[(l + r) / 2];
    
    while (i < j)
    {
        do i++; while (q[i] < x);
        do j--; while (q[j] > x);
        if (i < j) 
        {
            int temp = q[i]; q[i] = q[j]; q[j] = temp;
        }
    }
    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}

//桶排序
#include <stdio.h>

int main() 
{
    int N, x;
    int bucket[1005] = {0}; // 准备1001个桶，初始为0
    int M = 0;              // 记录不重复的个数

    scanf("%d", &N);

    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &x);
        // 如果这个数之前没出现过
        if (bucket[x] == 0) 
        {
            bucket[x] = 1; // 标记为出现过
            M++;           // 独立个数加1
        }
    }

    printf("%d\n", M);
    
    // 从 1 到 1000 顺序遍历，自动完成了“从小到大排序”
    for (int i = 1; i <= 1000; i++) 
    {
        if (bucket[i] == 1) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
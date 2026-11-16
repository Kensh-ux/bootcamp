//https://www.luogu.com.cn/problem/P1177

#include <stdio.h>

int a[100005];
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

    for (int i = 0; i < N; i++)
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
            int temp = q[i];
            q[i] = q[j];
            q[j] = temp;
        }
    }
    
    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}
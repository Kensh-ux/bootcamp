//https://www.luogu.com.cn/problem/P1923

#include <stdio.h>

int a[5000005]; 

void quick_select(int l, int r, int k) 
{
    if (l == r) return; 
    
    int i = l, j = r;
    int pivot = a[(l + r) / 2];
    
    //这一步和快排一样，把比pivot小的扔左边，大的扔右边
    while (i <= j) 
    {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;
        if (i <= j) 
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    
    if (k <= j) {
        quick_select(l, j, k); //k在左边，只递归左边
    } else if (k >= i) {
        quick_select(i, r, k); //k在右边，只递归右边
    }
    //如果 k 在 (j, i) 之间，说明它刚好被排好位置了，什么都不用做
}

int main() 
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    
    //开始分治寻找
    quick_select(0, n - 1, k);
    
    //因为找完后，a[k] 必定就是第 k 小的数
    printf("%d\n", a[k]);
    
    return 0;
}
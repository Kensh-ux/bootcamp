#include <stdio.h>
int main()
{
    int a[10] = {5, 2, 8, 1, 9, 3, 7, 4, 6, 0};
    for(int i=0; i<9; ++i)
    {
        int mid_idx=i;
        for(int j=i+1; j<10; ++j)
        {
            if(a[j] < a[mid_idx]) mid_idx=j;
        }
        int t=a[i];
        a[i]=a[mid_idx];
        a[mid_idx]=t;
    }
    for(int i=0; i<10; ++i)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
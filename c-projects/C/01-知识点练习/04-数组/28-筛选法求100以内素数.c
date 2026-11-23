#include <stdio.h>
int main()
{
    int a[101]={0};

    for(int i=2; i<=100; ++i)
    {
        if(a[i] == 0)
        {
            printf("%d ",i);
            for(int j=i*2; j<=100; j += i) a[j] = 1;
        }
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    int num;
    scanf("%d",&num);

    int i=n-1;
    while(i >= 0 && a[i] > num)
    {
        a[i+1] = a[i];
        i--;
    }
    a[i+1] = num;
    n++;

    for(int j=0; j<n; ++j)
    {
        printf("%d ",a[j]);
    }
    return 0;
}
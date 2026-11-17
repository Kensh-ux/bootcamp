#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[11][11];

    //初始
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            scanf(" %c",&a[i][j]);
        }
    }
    //修改之后
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            scanf("%c",&a[i][j]);
        }
    }

    return 0;
}
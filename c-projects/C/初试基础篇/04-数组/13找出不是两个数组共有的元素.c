#include <stdio.h>

int main(){
    int an, bn, a[20], b[20], c[20];

    scanf("%d", &an);
    for(int i = 0; i < an; i ++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &bn);
    for(int i = 0; i < bn; i ++)
    {
        scanf("%d", &b[i]);
    }

    int x = 0;
    for(int j = 0; j < an; j ++)
    {
        int flag = 0;
        for(int k = 0; k < bn; k ++)
        {
            if(a[j] == b[k])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            c[x ++] = a[j];
        }
    }
    
    for(int k = 0; k < bn; k ++)
    {
        int flag = 0;
        for(int j = 0; j < an; j ++)
        {
            if(b[k] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            c[x ++] = b[k];
        }
    }

    for(int i = 0; i < x; i ++)
    {
        for(int j = i + 1; j < x; j ++)
        {
            if(c[i] == c[j])
            {
                for(int k = j; k < x - 1; k ++)
                {
                    c[k] = c[k + 1];
                }
                x --;
            }
        }
    }

    for(int i = 0; i < x; i ++)
    {
        printf("%d", c[i]);
        if(i != x - 1)
        {
            printf(" ");
        }
    }
    
    return 0;
}
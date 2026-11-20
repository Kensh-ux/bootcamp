#include <stdio.h>
int main()
{
    int x,n;
    scanf("%x %n",&x,&n);

    int sum=0;
    for(int i=0; i<n; ++i)
    {
        switch (x)
        {
            case(1):sum += 250;break;
            case(2):sum += 250;break;
            case(3):sum += 250;break;
            case(4):sum += 250;break;
            case(5):sum += 250;break;
            case(6):break;
            case(7):break;
        }
        x++;
        if(x == 8) x=1;
    }
    
    printf("%d",sum);
    return 0;
}
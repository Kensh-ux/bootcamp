#include <stdio.h>
#include <string.h>

int isPrime(int n) ;
int main()
{
    char s[10005];
    scanf("%s",s);

    int score=0;
    int len = strlen(s);

    for(int i=0;i<len-1; i++)
    {
        int num=(s[i]-'0')*10 + (s[i+1]-'0');
        if(isPrime(num))
        {
            score += num;
        }
    }
    printf("%d",score);
    return 0;
}

int isPrime(int n) 
{
    if (n < 2) return 0;
    for (int i=2; i * i <= n; i++)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}
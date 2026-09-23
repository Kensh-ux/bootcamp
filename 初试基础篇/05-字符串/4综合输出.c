#include <stdio.h>  

int isPrime(int n);

int main()
{
    char str[105];
    scanf("%s",str);

    char count[26]={0};
    for(int i=0; str[i] != '\0'; i++)
    {
        count[str[i]-'a']++;
    }

    int maxn=0,minn=100;
    for(int i=0; i<26; i++)
    {
        if(count[i]==0) continue;
        if(count[i] > maxn) maxn=count[i];
        if(count[i] <minn) minn=count[i];
    }

    int diff=maxn-minn;

    
    if(isPrime(diff))
    {
        printf("Lucky Word\n");
        printf("%d\n", diff);
    }else
    {
        printf("No Answer\n");
        printf("0\n");
    }
    return 0;
}

int isPrime(int n) {
    if (n < 2) return 0; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
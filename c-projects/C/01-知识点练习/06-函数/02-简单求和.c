#include <stdio.h>

#define MAXN 10

int Sum ( int List[], int N );

int main ()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%d", &List[i]);
    printf("%d\n", Sum(List, N));

    return 0;
}

int Sum ( int List[], int N )
{
    int count=0;
    for(int i=0; i<N; ++i)
        {
            count = count + List[i];
        }
    return count;
}
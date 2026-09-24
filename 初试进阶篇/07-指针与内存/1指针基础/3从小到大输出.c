#include <stdio.h>

void swap(int *p1,int *p2);
int main()
{
    int a,b,c;
    int *p1,*p2,*p3;
    scanf("%d %d %d",&a,&b,&c);

    p1 =&a;
    p2 =&b;
    p3 =&c;

    if(*p1 > *p2) swap(p1,p2);
    if(*p1 > *p3) swap(p1,p3);
    if(*p2 > *p3) swap(p2,p3);

    printf("%d %d %d",*p1,*p2,*p3);
    return 0;
}

void swap(int *p1,int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
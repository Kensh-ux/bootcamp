    #include <stdio.h>

    int main(){

    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int max = 0;
    if ( a>b ) {
        // 当 a 大于 b 时，再去判断 a 和 c 谁大
        if ( a>c ) {
            max = a;
        } else {
            max = c;
        }
    } else {
        // 当 b 大于等于 a 时，再判断 b 和 c 谁大
        if ( b>c ) {
            max = b;
        } else {
            max = c;
        }
    }
    printf("The max is %d\n", max);

    return 0;
}
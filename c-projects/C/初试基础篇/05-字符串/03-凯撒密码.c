#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char str[55]; 
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        str[i] = (str[i] - 'a' + n) % 26 + 'a';
    }

    printf("%s\n", str);

    return 0;
}

/* 

原字母 - 'a'：把 a 变成 0，b 变成 1... z 变成 25。
 + n：加上移动位数。
 % 26：如果加完超过 25 了，取余数就能实现循环（比如 z 是 25，加 1 变成 26，26 % 26 = 0，又回到了 a）。
 + 'a'：变回真正的字母字符。

 */
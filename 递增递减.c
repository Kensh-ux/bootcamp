#include <stdio.h>

int main() {
    int a = 10;

    // 后缀 ++
    printf("a++ 表达式的值为: %d\n", a++); // 打印 10（先使用旧值）
    printf("此时 a 的值为: %d\n", a);      // 打印 11（实际上变量已加1）

    // 前缀 ++
    printf("++a 表达式的值为: %d\n", ++a); // 打印 12（先自加成12，再使用新值）
    printf("此时 a 的值为: %d\n", a);      // 打印 12

    return 0;
}
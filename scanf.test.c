#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0;

    printf("请输入两个整数(用空格隔开): ");
    if (scanf("%d %d", &num1, &num2) == 2) {
        int sum = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, sum);
    } else {
        printf("输入格式错误！程序退出。\n");
        return 1;
    }

    return 0;
}
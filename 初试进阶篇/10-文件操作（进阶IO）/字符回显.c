#include <stdio.h>

int main() {
    int c;
    printf("请输入一段文字，按 Ctrl+Z (Windows) 或 Ctrl+D (Linux/Mac) 结束输入：\n");

    // 核心循环：只要 getchar() 没有返回 EOF，就继续
    while ((c = getchar()) != EOF) {
        putchar(c);   // 把读到的字符原样输出到屏幕
    }

    printf("\n输入结束。\n");
    return 0;
}
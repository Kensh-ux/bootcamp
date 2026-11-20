#include <stdio.h>
int main()
{
    printf("%5d\n",42);// "   42"，右对齐，宽 5
    printf("%-6d",42); printf("a\n");// "42    a"，左对齐
    printf("%07d\n",42);// "0000042"，补零
    printf("%+d\n",42);// "+42"，强制符号
    printf("%#x %#x %#x\n",255,30,597);// "0xff"，加前缀
    printf("%8.3f\n",3.14159);// "   3.142"，宽 8，小数 3 位
    printf("%.2s\n","hello");// "he"，只输出前 2 个字符
    printf("%*d\n",5,42);// 宽度由参数 5 给出，动态宽度
    return 0;
}
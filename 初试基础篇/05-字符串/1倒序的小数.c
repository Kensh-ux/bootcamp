#include <stdio.h>
#include <string.h> // 引入了 strlen 函数，用来求字符串长度

int main() {
    // 定义一个字符数组（也就是字符串）来存放输入的数字，给 20 个空间完全够用了
    char s[20]; 
    
    // 用 %s 读取输入的一整串字符，比如输入 "123.4"
    scanf("%s", s); 
    
    // 计算这个字符串有多长（比如 "123.4" 的长度是 5）
    int len = strlen(s);
    
    // 从字符串的最后一个字符开始，倒着往前面打印
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    
    return 0;
}
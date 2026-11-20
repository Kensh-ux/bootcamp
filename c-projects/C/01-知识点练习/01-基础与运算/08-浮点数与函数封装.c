#include <stdio.h>

// 将第一段代码封装成函数
void version_int() {
    int foo = 0;
    int inc = 0;
    printf("请输入身高的英尺和英寸(整数版)，如输入\"5 7\"表示5英尺7英寸： ");
    scanf("%d %d", &foo, &inc);
    printf("身高是%f米。\n", ((foo + inc / 12.0) * 0.3048));
}

// 将第二段代码封装成函数
void version_double() {
    double foot;
    double inch;
    printf("请输入身高的英尺和英寸(小数版)，如输入\"5 7\"表示5英尺7英寸： ");
    scanf("%lf %lf", &foot, &inch);
    printf("身高是%f米。\n", ((foot + inch / 12.0) * 0.3048));
}

// 只能保留一个 main 函数
int main() {
    // 如果你想执行第一个版本，就取消下面这行的注释
    // version_int(); 
    
    // 如果你想执行第二个版本，就取消下面这行的注释
    // version_double();

    // 或者让用户选择
    printf("请选择运行版本 (输入 1 或 2): ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
        version_int();
    } else {
        version_double();
    }

    return 0;
}
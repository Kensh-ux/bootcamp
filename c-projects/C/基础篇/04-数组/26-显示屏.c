//https://www.luogu.com.cn/problem/P5730

// XXX... X. XXX. XXX. X.X. XXX. XXX. XXX. XXX. XXX
// X.X... X. ..X. ..X. X.X. X... X... ..X. X.X. X.X
// X.X... X. XXX. XXX. XXX. XXX. XXX. ..X. XXX. XXX
// X.X... X. X... ..X. ..X. ..X. X.X. ..X. X.X. ..X
// XXX... X. XXX. XXX. ..X. XXX. XXX. ..X. XXX. XXX

#include <stdio.h>

int main() 
{
    int n;
    char s[105];
    scanf("%d", &n);
    scanf("%s", s);

    //三维字符数组：num[10][5][4]代表10个数字，每个数字5行，每行最多3个字符（加个'\0'是4）
    char num[10][5][4] = 
    {
        {"XXX", "X.X", "X.X", "X.X", "XXX"}, // 0
        {"..X", "..X", "..X", "..X", "..X"}, // 1
        {"XXX", "..X", "XXX", "X..", "XXX"}, // 2
        {"XXX", "..X", "XXX", "..X", "XXX"}, // 3
        {"X.X", "X.X", "XXX", "..X", "..X"}, // 4
        {"XXX", "X..", "XXX", "..X", "XXX"}, // 5
        {"XXX", "X..", "XXX", "X.X", "XXX"}, // 6
        {"XXX", "..X", "..X", "..X", "..X"}, // 7
        {"XXX", "X.X", "XXX", "X.X", "XXX"}, // 8
        {"XXX", "X.X", "XXX", "..X", "XXX"}  // 9
    };

    for (int row = 0; row < 5; ++row) 
    {
        for (int i = 0; i < n; ++i) 
        {
            int digit = s[i] - '0';//获取当前数字
            printf("%s", num[digit][row]);
            if (i != n - 1) 
            {
                printf(".");
            }
        }
        printf("\n"); 

    return 0;
}
//https://www.luogu.com.cn/problem/P1205

#include <stdio.h>
#include <string.h>

int n;
char a[15][15], b[15][15];
char temp[15][15];

//辅助函数,判断当前临时的temp和目标图b是否一样
int check()
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (temp[i][j] != b[i][j]) return 0; //只要有一个不一样，就返回假
        }
    }
    return 1; //完全一样则真
}

int main() 
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%s", a[i]);
    for (int i = 0; i < n; i++) scanf("%s", b[i]);

    // 1. 转 90 度
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[j][n - 1 - i] = a[i][j];
    if (check()) { printf("1\n"); return 0; }

    // 2. 转 180 度
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[n - 1 - i][n - 1 - j] = a[i][j];
    if (check()) { printf("2\n"); return 0; }

    // 3. 转 270 度
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[n - 1 - j][i] = a[i][j];
    if (check()) { printf("3\n"); return 0; }

    // 4. 水平翻转
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[i][n - 1 - j] = a[i][j];
    if (check()) { printf("4\n"); return 0; }

    // 5. 组合：先水平翻转，将结果存入 temp
    char ref[15][15]; // 专门存翻转后的图
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            ref[i][n - 1 - j] = a[i][j];

    // 5.1 组合 90 度
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[j][n - 1 - i] = ref[i][j];
    if (check()) { printf("5\n"); return 0; }

    // 5.2 组合 180 度
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[n - 1 - i][n - 1 - j] = ref[i][j];
    if (check()) { printf("5\n"); return 0; }

    // 5.3 组合 270 度
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[n - 1 - j][i] = ref[i][j];
    if (check()) { printf("5\n"); return 0; }

    // 6. 不改变
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[i][j] = a[i][j];
    if (check()) { printf("6\n"); return 0; }

    // 7. 无效
    printf("7\n");
    return 0;
}
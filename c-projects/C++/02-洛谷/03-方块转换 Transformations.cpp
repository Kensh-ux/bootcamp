//https://www.luogu.com.cn/problem/P1205

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n;

// 顺时针旋转 90 度
vector<string> rotate90(const vector<string>& a) 
{
    vector<string> b(n, string(n, ' ')); // 创建一个大小为 n*n 的空图
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            b[j][n - 1 - i] = a[i][j]; // 核心坐标变换公式
        }
    }
    return b;
}

// 顺时针旋转 180 度
vector<string> rotate180(const vector<string>& a) 
{
    vector<string> b(n, string(n, ' '));
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            b[n - 1 - i][n - 1 - j] = a[i][j];
        }
    }
    return b;
}

// 顺时针旋转 270 度
vector<string> rotate270(const vector<string>& a) 
{
    vector<string> b(n, string(n, ' '));
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            b[n - 1 - j][i] = a[i][j];
        }
    }
    return b;
}

// 水平翻转（左右镜像）
vector<string> reflect(const vector<string>& a) 
{
    vector<string> b(n, string(n, ' '));
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            b[i][n - 1 - j] = a[i][j];
        }
    }
    return b;
}

int main() {
    cin >> n;
    vector<string> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    // 1. 转 90 度
    if (b == rotate90(a)) 
    {
        cout << 1 << endl;
        return 0;
    }
    // 2. 转 180 度
    if (b == rotate180(a)) 
    {
        cout << 2 << endl;
        return 0;
    }
    // 3. 转 270 度
    if (b == rotate270(a)) 
    {
        cout << 3 << endl;
        return 0;
    }
    // 4. 水平翻转
    if (b == reflect(a)) 
    {
        cout << 4 << endl;
        return 0;
    }
    // 5. 组合（先反射，再旋转）
    vector<string> ref_a = reflect(a);
    if (b == rotate90(ref_a) || b == rotate180(ref_a) || b == rotate270(ref_a)) 
    {
        cout << 5 << endl;
        return 0;
    }
    // 6. 不改变
    if (b == a) 
    {
        cout << 6 << endl;
        return 0;
    }
    // 7. 无效
    cout << 7 << endl;
    
    return 0;
}
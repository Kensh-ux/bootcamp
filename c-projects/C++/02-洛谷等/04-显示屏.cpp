//https://www.luogu.com.cn/problem/P5730

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n;
    string s;
    cin >> n >> s;

    //打表，把0-9的5行图形存起来
    //num[数字][行号]
    string num[10][5] = 
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

    //按行输出，一共5行
    for (int row = 0; row < 5; ++row) 
    {
        //每一行，把输入的每个数字的这一行拼起来
        for (int i = 0; i < n; ++i) 
        {
            int digit = s[i] - '0'; //把字符 '0'-'9' 变成数字 0-9
            cout << num[digit][row]; //打印该数字的第row行
            if (i != n - 1) 
            {
                cout << "."; 
            }
        }
        cout << endl;
    }

    return 0;
}
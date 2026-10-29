#include <bits/stdc++.h>
#include <string>//用到
using namespace std;

//顾名思义，就是储存字符串的。

int main()
{
    //构造
    //构造函数：string(长度, 初值)
    string s1;           // 构造字符串，为空
    string s2 = "awa!";  // 构造字符串，并赋值awa!
    string s3(10, '6');  // 构造字符串，通过构造函数构造为6666666666
    
    //输入输出
    string s;
    cin >> s;
    cout << s << endl;

    //当然能用printf等，但是会略多
    string s;
    char buf[100];
    scanf("%s",buf);
    s = buf;
    printf("%s",s.c_str());//好奇怪啊

    string df(10,'0');//0000000000
    df = "awa";//赋值,接下来输出awa

    //修改、查询指定下标字符
    s[0] = 'b';
    cout << s << endl;//输出bwa

    //是否相同
    string a1 = "123",a2 = "123";
    if(a1 == a2)
    {
        cout << "yes" << endl;
    }

    //字符串连接
    cout << a1+a2 << endl;//输出123123

    //尾接字符串
    a1 += 'a';
    cout << a1+a2 << endl;//输出123a123

    //取子串
    string m1 = "123123123";
    cout << m1.substr(3) << endl;//输出123123
    cout << m1.substr(3,4) << endl;//输出1231

    //查找字符串
    string v1 = "123123";
    if(v1.find("312") != string::npos)//v1.find返回查找的字符串的第一个下标
    //返回2，而npos为not a position,大多返回-1，如果.find没找到也会返回这个数
    {
        cout << "yes" << endl;
    }

    //获取长度，清空，判空不赘述

    //数值与字符串互转（C++11）
    string h1 = "123123";
    int x = stoi(h1);//从字符变数字
    cout << x << endl;//输出123123
    //long long--stoll,double--stod,float--stof

    int m = 28652;
    string kl = to_string(m);
    cout << kl << endl;//输出28652，字符串

    //注意事项

    //尾接字符串一定要用 +=
    //string 的 += 运算符，将会在原字符串原地尾接字符串。而 + 了再 = 赋值，会
    //先生成一个临时变量，再复制给 string. 通常字符串长度可以很长，如果使用 + 字符串很容易就 TLE 了。
    // 优化前: 15139ms
    string s;
    for (int i = 0; i < 5e5; i++)
        s = s + "a";
    // 优化后: < 1ms (计时器显示0)
    string s;
    for (int i = 0; i < 5e5; i++)
        s += "a";

    //.substr() 方法的奇葩参数
    //一定要注意，C++ string 的取子串的第一个参数是子串起点下标，第二
    //个参数是子串长度。第二个参数不是子串终点！不是子串终点！要与 java 等其他语言区分开来。

    //.find() 方法的复杂度
    //该方法实现为暴力实现，时间复杂度为 O(n^2).注意是否会超时

    return 0;
}
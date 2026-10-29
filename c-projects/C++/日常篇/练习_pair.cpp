#include <bits/stdc++.h>
#include <utility>//用到
using namespace std;

int main()
{
    //构造
    //pair<第一个值类型, 第二个值类型> pr
    //第一个值类型：要储存的第一个值的数据类型
    //第二个值类型：要储存的第二个值的数据类型
    pair<int, int> p1;
    pair<int, char> p2;
    pair<string, double> p3;

    //赋值
    //老式
    pair<int, char> pr = make_pair(1, 'a');
    //列表构造 C++11
    pair<int, char> pr = {1, 'a'};

    //取值
    pair<int, char> pr = {1, 'a'};
    int awa = pr.first;
    char bwb = pr.second;
    //结构化绑定 C++17
    pair<int, char> pr = {1, 'a'};
    auto &[awa, bwb] = pr;

    //判同同样是==
    pair<int, int> o1 = {1, 2};
    pair<int, int> o2 = {1, 3}; 

    if (o1 == o2) 
    { 
        cout << "yes" << endl;
    }

    //适用场景
    //所有需要二元组的场景均可使用，效率和自己定义结构体差不多。
    return 0;
}
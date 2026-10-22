#include <bits/stdc++.h>
#include <map>//用到
using namespace std;

//提供对数时间的有序键值对结构。底层原理是红黑树。
//有些像py的字典

//本身是互异性，有序性。
//同样的，与set一样，有multimap(任意次),unordered_map（无序性）
//增删改查时间复杂度均为 O(log n)
int main()
{   
    //构造
    //map<键类型, 值类型, 比较器> mp
    //键类型：要储存键的数据类型
    //值类型：要储存值的数据类型
    //比较器：键比较大小使用的比较器，默认为less<类型>，可自定义

    map<int,int> mp1;// int->int 的映射（键从小到大）
    map<int, int, greater<int>> mp2; // int->int 的映射（键从大到小）
    //还可以
    map<char,int> mpp1;
    map<string,int> mpp2;
    map<string,vector<int>> mpp3;

    //增，改
    map<int,int> mp;
    mp[2]=1;//跟数组很像
    cout << mp[2] << '\n';//输出1
    //也可以修改
    mp[2]=2;
    cout << mp[2] << '\n';//输出2
    //如果未声明
    cout << mp[3] << '\n';//输出0，因为初值为0

    //查元素，和set一样用find，但由于底层是红黑树，find在map用的不是遍历
    if(mp.find(2) != mp.end())
        cout << "yes" << '\n';
    
    //删除也用erase
    mp.erase(2);
    //判断元素是否存在也用count
    cout << mp.count(3) << '\n';//输出0

    //查看大小/清空/判空不赘述

    //遍历
    //可使用迭代器进行遍历：
    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it)
        cout << it->first << ' ' << it->second << endl;

    //基于范围的循环（C++ 11）：
    for (auto &pr : mp)
        cout << pr.first << ' ' << pr.second << endl;
    
    //结构化绑定 + 基于范围的循环（C++17）：
    for (auto &[key, val] : mp)
        cout << key << ' ' << val << endl;

    //适用情形
    //需要维护映射的场景可以使用：输入若干字符串，统计
    //每种字符串的出现次数。(map<string, int> mp)

    //注意事项
    //中括号访问时默认值
    //如果使用中括号访问 map 时对应的键不存在，那么会新增这个
    //键，并且值为默认值，因此中括号会影响键的存在性。
    map<char, int> mp;
    cout << mp.count('a') << endl; // 0
    mp['a'];                       // 即使什么都没做，此时mp['a']=0已经插入了
    cout << mp.count('a') << endl; // 1
    cout << mp['a'] << endl;       // 0

    //不可用迭代器计算下标
    //map 的迭代器不能像 vector 一样相减得到下标。下面是错误用法：
    //auto it = mp.find('a');     // 正确，返回 'a' 所在位置的迭代器。
    //int idx = it - mp.begin();  // 错误！不可相减得到下标。

    return 0;
}
#include <bits/stdc++.h>
#include <map>//用到
using namespace std;

//提供对数时间的有序键值对结构。底层原理是红黑树。
//有些像py的字典

//本身是互异性，有序性。
//同样的，与set一样，有multimap(任意次),unordered_map（无序性）
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

    //查元素，和set一样用find，但由于底层是红黑树，find在map用的是二分查找
    if(mp.find(2) != mp.end())
        cout << "yes" << '\n';
    
    //删除也用erase
    mp.erase(2);
    //判断元素是否存在也用count
    cout << mp.count(3) << '\n';//输出0

    //查看大小/清空/判空不赘述

    return 0;
}
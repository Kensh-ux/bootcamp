#include <bits/stdc++.h>
#include <set>//用到

using namespace std;

//提供对数时间的插入、删除、查找的集合数据结构。底层原理是红黑树。
//集合三要素的定义看obsidian吧，表格形式，不好放这
int main()
{   
    //构造
    //set<类型, 比较器> st
    //类型：要储存的数据类型    
    //比较器：比较大小使用的比较器，默认为 less<类型>，可自定义
    set<int> st1;//储存int的集合（从小到大）
    set<int, greater<int>> st2; //储存int的集合（从大到小）

    //遍历
    //可使用迭代器进行遍历：
    set<int> st;
    st.insert(1);//插入元素
    st.insert(2);
    st.insert(2);//由于互异性，仍只有一个2
    st.insert(0);

    for(auto &ele:st)
        cout << ele << "\n";//此时输出0，1，2
    
    //删除
    st.erase(2);//删除2
    for(auto &ele:st)
        cout << ele << "\n";//此时输出0，1

    //查找
    if(st.find(1) != st.end())//find查找，如果查找元素存在则返回一个指向该元素的迭代器，未找到则返回尾迭代器
        cout << "yes" << '\n';//输出yes，如果是st.find(2)则不会
    
    //判断元素是否存在
    if(st.count(2))
        cout << "yes" << '\n';//不会输出，count在set中实际只有1，0  更多数值在multiset中出现
    
    //查看大小/清空/判空不赘述

    

    return 0;
}
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

    for (set<int>::iterator it = st.begin(); it != st.end(); ++it)
    cout << *it << endl;


    return 0;
}
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
        cout << *it << endl;//暂时不深究
    
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

    //适用情形
    //元素去重：[1,1,3,2,4,4]→[1,2,3,4]
    //维护顺序：[1,5,3,7,9]→[1,3,5,7,9]
    //元素是否出现过；元素大小 [−10¹⁸, 10¹⁸]，元素数量10⁶，vis数组无法实现，通过set可以完成。
    
    //注意事项
    //不存在下标索引
    //set 虽说可遍历，但仅可使用迭代器进行遍历，它不存在
    //下标这一概念，无法通过下标访问到数据。下面是错误用法：
    //cout << st[0] << endl;

    //元素只读
    //set 的迭代器取到的元素是只读的（因为是 const 迭代器），不可修改
    //其值。如果要改，需要先 erase 再 insert. 下面是错误用法：
    // cout << *st.begin() << endl; // 正确。可读。
    // *st.begin() = 1;             // 错误！不可写！

    //不可用迭代器计算下标
    //set 的迭代器不能像 vector 一样相减得到下标。下面是错误用法：
    // auto it = st.find(2);      // 正确，返回2所在位置的迭代器。
    // int idx = it - st.begin(); // 错误！不可相减得到下标。

    return 0;
}
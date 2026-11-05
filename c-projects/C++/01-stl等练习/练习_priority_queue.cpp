#include <bits/stdc++.h>
#include <queue>//用到 

//提供常数时间的最大元素查找，对数时间
//的插入与提取，底层原理是二叉堆。

//进出队复杂度 O(log n)，取堆顶 O(1)
using namespace std;
//适用情形
//持续维护元素的有序性：每次向队列插入大小不定
//的元素，或者每次从队列里取出大小最小/最大的
//元素，元素数量 n，k 次操作

//每次插入后进行快速排序：k⋅n log n
//使用优先队列维护：k log n
int main()
{
    //构造重点写下
    //priority_queue<类型, 容器, 比较器> pque
    //类型：要储存的数据类型，如int
    //容器：储存数据的底层容器，默认为vector<类型>，竞赛中保持默认即可
    //比较器：比较大小使用的比较器，默认为less<类型>，可自定义

    priority_queue<int> pque;//此时储存int的大顶堆
    //啥意思，我简单理解的时会自动按照从小到大排列，如：
    pque.push(1);
    cout << pque.top() << '\n';//取堆顶，输出1
    pque.push(3);//自动将3放到顶
    cout << pque.top() << '\n';//输出3
    pque.push(2);
    cout << pque.top() << '\n';//仍输出3
    pque.push(4);
    cout << pque.top() << '\n';//输出4

    pque.pop();//出堆，4被踢出
    cout << pque.top() << '\n';//重新输出3

    priority_queue<int, vector<int>, greater<int>> pque2;
    //储存int的小顶堆
    //全反过来了，上面的四个cout会全输出1
    //即，越小的数，越在堆顶，故top取堆顶会输出

    //注意事项
    //1.仅堆顶可读
    //只可访问堆顶，其他元素都无法读取到。下面是错误用法：
    //cout << pque[1] << endl;

    //2.所有元素不可写
    //堆中所有元素是不可修改的。下面是错误用法：
    //pque[1] = 2;
    //pque.top() = 1;

    //如果你恰好要修改的是堆顶元素，那么是可以完成的：
    //int tp = pque.top();
    //pque.pop();
    //pque.push(tp + 1);
    //但，很曲线救国
    //你必须确保自己修改的数据，输入的数一定也会成为堆顶，否则不行

    return 0;
}
//于需要自定义比较器的情况，涉及一些初学时容易看迷糊的
//语法（重载小括号运算符 / lambda 表达式），在此就不
//展开讲了。如果想要了解，可以查阅 cppreference 中的代码示例。

//还是挺麻烦的，去obsidian自己看吧


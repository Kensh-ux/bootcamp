#include <bits/stdc++.h>
#include <stack>//用到

//通过二次封装双端队列(deque)容器，实现先进后出的
//栈数据结构。

using namespace std;

int main()
{
    //很简单
    //分为构造、进栈，出栈，取栈顶书写
    //查看大小/判空与vector中用法一样，不赘述
    stack<double> stk;
    
    stk.push(1.1);
    stk.push(1.4);//进栈

    cout << stk.size() << '\n';//读取长度
    stk.empty();//清空

    stk.top();//取栈顶
    //可以想象有一个桶，依次放入东西，1.4是最后放的，所
    //以取出的数是1.4
    //int a = stk.top();

    stk.pop();//出栈，1.4被踢出
    stk.top();//此时输出1.0

    return 0;
}
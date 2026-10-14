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

    //适用情形
    //如果不卡常的话，就可以直接用它而不需要手写栈了。
    //另外，vector也可以当栈用，vector的.back()取尾部元素，就相当于取栈
    //顶，而.push_back()相当于进栈 .pop_back()相当于出栈。

    //私以为vector完全薄纱stack

    return 0;
}

    //注意事项
    //不可访问内部元素！下面都是错误用法
    // for (int i = 0; i < stk.size(); i++)
    // cout << stk[i] << endl;
    // for (auto ele : stk)
    // cout << ele << endl;

    //所以说vector薄纱stack,完全上位替代
    //唯一优点是，栈的内存占用更少，竞赛时有时会卡内存
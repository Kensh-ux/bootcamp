#include <bits/stdc++.h>
#include <queue>//用到

//通过二次封装双端队列 (deque) 容器，实现先进先出的队列数据结构。

using namespace std;

int main()
{
    //构造啥的感觉都差不多，不赘述
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    
    cout << que.front() << '\n';//取队首
    cout << que.back() << '\n';//取队尾
    //此时输出1，2，3

    que.pop();//出队，由于先进先出，此时出1

    cout << que.front() << '\n';
    cout << que.back() << '\n';
    //输出2，3

    
    que.push(4);
    cout << que.size() << '\n';//此时输出2

    cout << que.empty() << '\n';//判空，输出0，即false
    //与栈相对，同样没有clear
    //适用情形也一样
    //如果不卡常的话，就可以直接用它而不需要手写队列了。
    //注意事项也一样
    //不可访问内部元素，不赘述

    return 0;
}
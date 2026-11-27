//https://www.luogu.com.cn/problem/P1996

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    queue<int> q;
    for (int i = 1; i <= n; ++i)
        q.push(i);          

    int cnt = 0;            

    while (!q.empty()) 
    {
        int x = q.front(); 
        q.pop();            

        ++cnt;              

        if (cnt == m) 
        {
            cout << x << ' '; 
            cnt = 0;//下一个人重新从1开始
        } else 
        {
            q.push(x);//没报到m，回到队尾
        }
    }

    cout << '\n';
    return 0;
}
//https://www.luogu.com.cn/problem/P1271

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> num(m,0);

    for(int i=0; i<num.size(); ++i)
    {
        cin >> num[i];
    }

    sort(num.begin(),num.end());

    for(int i=0; i<num.size(); ++i)
    {
        cout << num[i] << ' ';
    }
    cout << '\n';
    return 0;
}
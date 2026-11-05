#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a[5]={1,2,3,4,5};

    for(int &x : a)
    {
        x *= 2;
    }

    for(int x : a)
    {
        cout << x << ' ';
    }
    cout << '\n';
    return 0;
}
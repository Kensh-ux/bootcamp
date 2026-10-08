#include <bits/stdc++.h>
using namespace std;

void myswap(int &a,int &b);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x=1,y=2;
    myswap(x,y);
    cout << x << ' ' << y << '\n';
    return 0;
}

void myswap(int &a,int &b)
{
    int t = a;
    a = b;
    b = t;
}
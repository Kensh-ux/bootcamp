#include <bits/stdc++.h>
using namespace std;

void getminmax(int a,int b,int &mn,int &mx);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b;
    cin >> a >> b;
    
    int mn,mx;
    getminmax(a,b,mn,mx);
    cout << mn << ' ' << mx << '\n';

    return 0;
}

void getminmax(int a,int b,int &mn,int &mx)
{
    if(a<b)
    {
        mn = a;
        mx = b;
    }
    else
    {
        mn = b;
        mx = a;
    }
}
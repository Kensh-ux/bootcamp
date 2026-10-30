//https://www.acwing.com/problem/content/92/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mul(ll a,ll b,ll p);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll a,b,p;
    cin >> a >> b >> p;

    cout << mul(a,b,p) << '\n';

    return 0;
}

ll mul(ll a,ll b,ll p){
    ll ans = 0;
    for(; b ; b >>= 1)
    {
        if(b & 1) ans = (ans + a) % p;
        a = a*2 % p;
    }
    return ans;
}
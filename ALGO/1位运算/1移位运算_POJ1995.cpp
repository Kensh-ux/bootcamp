#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int power(int a,int b,int p);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b,p;
    cin >> a >> b >> p;

    cout << power(a,b,p) << '\n';

    return 0;
}

int power(int a,int b,int p){
    int ans = 1 % p;
    for(; b ; b >>= 1)
    {
        if(b & 1) ans = 1LL * ans * a % p;
        a = 1LL * a * a % p;
    }
    return ans;
}
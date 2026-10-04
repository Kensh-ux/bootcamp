#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    map<string,int> mp;
    mp["apple"] = 3;
    mp["banana"] = 5;
    
    for(const auto &p : mp)
    {
        cout << p.first << ' ' << p.second << '\n';
    }
    
    return 0;
}
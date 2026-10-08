#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector <int> v = {1,2,3,4,5};

    for(auto &x : v)
    {
        x *= 2;
    }

    for(const auto &x : v)
    {
        cout << x << ' ';

    }
    cout << '\n';
    return 0;
}
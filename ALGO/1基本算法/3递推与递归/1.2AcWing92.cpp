//https://www.acwing.com/problem/content/94/
//位运算

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for(int mask=0; mask < (1 << n); mask++)
    {
        for(int i=0; i<n; i++)
        {
            if((mask >> i) & 1)
            {
                cout << (i + 1) << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    double x;
    cin >> x;
    cout << fixed << setprecision(2) << x << '\n';

    double y=1.231;
    double up = ceil(y*100)/100.0;//向上取整
    double down = floor(y*100)/100.0;//向下取整

    cout << up << ' ' << down << '\n';
    return 0;
}
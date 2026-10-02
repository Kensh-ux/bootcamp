#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> v = {1, 2, 3, 4, 5};

    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << ' ';
    }
    cout << '\n';

    return 0;
}
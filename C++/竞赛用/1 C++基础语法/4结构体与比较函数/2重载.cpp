#include <bits/stdc++.h>
using namespace std;

struct Student 
{
    int id;
    int score;

    bool operator<(const Student &other) const 
    {
        if (score != other.score) return score > other.score;
        return id < other.id;
    }
};

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<Student> v = {
        {1, 90},
        {2, 85},
        {3, 95},
        {4, 90}
    };

    sort(v.begin(), v.end());

    for (const auto &s : v) {
        cout << s.id << ' ' << s.score << '\n';
    }

    return 0;
}
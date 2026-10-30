#include <bits/stdc++.h>
using namespace std;

struct Student {
    int id;
    int score;
};

bool cmp(const Student &a,const Student &b)
{
    if(a.score != b.score) return a.score > b.score;
    return a.id < b.id;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<Student> v = {
        {1,90},
        {2,85},
        {3,95},
        {4,90}
    };

    sort(v.begin(),v.end(),cmp);

    for(const auto &s : v)
    {
        cout << s.id << ' '  << s.score << '\n';
    }

    return 0;
}
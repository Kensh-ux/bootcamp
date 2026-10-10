//https://www.acwing.com/problem/content/94/
//递归法

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> chosen;
void calc(int x)
{
    
    
    //问题边界
    if(x == n+1)
    {
        for(int i=0; i < chosen.size(); i++)
        {
            cout << chosen[i] << " ";
        }

        puts("");
        return;
        
        //不选x
        calc(x+1);
        
        //选x
        chosen.push_back(x);//推出，记录x
        calc(x+1);
        chosen.pop_back();//回溯，撤销选择x，还原现场
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;

    calc(1);
    
    return 0;
}
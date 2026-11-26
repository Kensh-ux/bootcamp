//https://www.luogu.com.cn/problem/P5266

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int Q;
	cin >> Q;
	
	map<string,int> mp;
	
	while(Q--)
	{
		int op;
		cin >> op;
		
		if(op == 1)
		{
			string name;
			int score;
			cin >> name >> score;
			mp[name] = score;
			cout << 'OK\n';
		}
		
		else if(op == 2)
		{
			string name;
			cin >> name;
			auto it = mp.find(name);
			if(it == mp.end())
			{
				cout << 'Not Found\n';
			}
			else
				cout << it->second << '\n';
		}
		
		else if(op == 3)
		{
			string name;
			cin >> name;
			auto it = mp.find(name);
			if(it == mp.end())
			{
				cout << 'Not Found\n';
			}
			else
			{
				mp.erase(it);
				cout << 'Deleted successfuliy\n';
			}
		}
		
		else if(op == 4)
		{
			cout << mp.size() << '\n';
		}
	}
	return 0;
}

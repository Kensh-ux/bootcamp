//https://www.luogu.com.cn/problem/P1739

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string s;
	cin >> s;
	
	stack<char> st;
	bool ok = true;
	
	for(char c:s)
	{
		if(c == '@') break;
		
		if(c == '(')
		{
			st.push(c);
		}
		else if(c == ')')
		{
			if(st.empty())
			{
				ok = false;
				break;
			}
		}
		st.pop();
	}
	
	if(!st.empty()) ok = false;
	
	cout << (ok ? 'YES' : 'NO') << '\n';
	return 0;
}

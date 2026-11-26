//https://www.luogu.com.cn/problem/P1059

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; ++i) 
	{
		cin >> a[i];
	}
		
	sort(a.begin(),a.end());
	a.erase(unique(a.begin(),a.end()),a.end());
	
	
	cout << a.size() <<'\n';
	
	for(int i=0; i<a.size(); ++i)
	{
		cout << a[i] << ' ';
	}
	cout << '\n';
	return 0;
}

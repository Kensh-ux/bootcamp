//https://www.luogu.com.cn/problem/P1308

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string word,line;
	getline(cin,word);
	getline(cin,line);
	
	for(int i=0; i<word.size(); ++i) 
	{
		word[i] = tolower(word[i]);
	}
	
	for(int i=0; i<line.size(); ++i) 
	{
		line[i] = tolower(line[i]);
	}
	
	word = " "+word+" ";
	line = " "+line+" ";
	
	int cnt=0;
	int first=-1;
	
	size_t pos = line.find(word);
	
	while(pos != string::npos)
	{
		if(first == -1) first = (int)pos;
			
		cnt++;
		pos = line.find(word,pos+1); 
	}
		if(cnt == 0) 
			cout << cnt << '\n';
		else
			cout << cnt << ' ' << first << '\n'; 
	
	return 0;
}

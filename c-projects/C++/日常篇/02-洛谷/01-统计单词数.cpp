//https://www.luogu.com.cn/problem/P1308

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string word,article;
    cin >> word;
    cin.ignore(1000,'\n');
    getline(cin,article);

    for(int i=0; i<word.size(); ++i)
        word[i] = tolower(word[i]);
    for(int i=0; i<article.size(); ++i)
        article[i] = tolower(article[i]);

    word = ' ' + word + ' ';
    article = ' ' + article + ' ';

    int count = 0;
    int first_pos = -1;

    int pos = article.find(word);
    
    while(pos != string::npos)
    {
        count++;
        if(first_pos == -1)
            first_pos = pos;
        
        pos = article.find(word,pos+1);
    }

    if(count == 0)
        cout << -1 << '\n';
    else
        cout << count << ' ' <<  first_pos << '\n';
    return 0; 
}
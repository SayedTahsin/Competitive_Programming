#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    vector<int>v[26];
    string s;
    getline(cin,s);
    for(int i=0; s[i]; i++)
    {
        if(s[i]==' ')
            continue;
        x=s[i]-'a';
        v[x].push_back(i);
    }
    for(int i=0; i<26; i++)
    {
        cout<<(char)(i+'a')<<": ";
        for(auto x:v[i])
            cout<<x<<' ';
        cout<<endl;
    }
}

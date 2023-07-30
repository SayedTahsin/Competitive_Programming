#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
bool func(char a,char b)
{
    return a>b;
}
int main()
{
    vector<char> v;
    v.push_back('S');
    v.push_back('A');
    v.push_back('Y');
    v.push_back('E');
    v.push_back('D');
    sort(v.begin(),v.begin()+3);    ///sort first 3 elements
    for(auto x:v)
        cout<<x<<' ';
    puts("");
    sort(v.begin(),v.end(),func);   ///for decreasing order
    for(auto x:v)
        cout<<x<<' ';
    puts("");
    sort(v.begin(),v.end());        ///for increasing order
    for(auto x:v)
        cout<<x<<' ';
    puts("");
}

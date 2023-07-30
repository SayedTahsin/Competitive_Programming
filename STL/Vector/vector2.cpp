#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int> v(2,5);
    v.push_back(12);
    vector<int>::iterator it;
    it=v.begin();
    cout<<*it<<' ';
    it+=2;
    cout<<*it;
    puts("");
    for(it=v.begin();it!=v.end();it++)cout<<*it<<'\t';
}

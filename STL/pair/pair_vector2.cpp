#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first==b.first)
    {
        return a.second>b.second;
    }
    else
        return a.first < b.first;
}
int main()
{
    vector<pair<int,int>>v;
    int n,x,y;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<' '<<v[i].second<<endl;
    }
}



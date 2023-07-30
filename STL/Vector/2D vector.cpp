#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    vector<vector<int>>v;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        vector<int> a;
        for(int j=0; j<n; j++)
        {
            cin>>x;
            a.push_back(x);
        }
        v.push_back(a);
    }
    for(int i=0; i<n; i++)
    {
        for(auto x:v[i])
            cout<<x<<' ';
        cout<<endl;
    }
}

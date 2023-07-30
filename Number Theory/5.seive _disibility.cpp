#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100006
vector<ll>adj[1000001];
int main()
{
    ll n, i, j, x;
    for(i=1; i<=mx; i++)
    {
        for(j=i; j<=mx; j+=i)
        {
            adj[j].push_back(i);
        }
    }
    while(1)
    {
        cin>>x;
        printf("Divisors of %lld = ", x);
        for(i=0; i<adj[x].size(); i++)
        {
            cout<<adj[x][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

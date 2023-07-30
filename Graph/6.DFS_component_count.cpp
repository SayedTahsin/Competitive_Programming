#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
vector<int>adj[MAX];
bool vis[MAX]= {0};

void dfs(int v)
{
    vis[v]=1;
    //cout<<v<<' ';
    for(int i=0; i<adj[v].size(); i++)
    {
        int x=adj[v][i];
        if(vis[x]==1)
            continue;
        dfs(x);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int count=0;
    for(int i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            count++;
            dfs(i);
        }
    }
    cout<<count<<endl;
}


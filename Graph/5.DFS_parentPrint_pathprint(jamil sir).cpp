//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int n, m;
int visited[10000];
int par[10000];
vector<pair<int, int>> edges[1000];
void dfs(int s)
{
    visited[s] = 1;
    cout << s << ' ';
    for (int i = 0; i < edges[s].size(); i++)
    {
        int v = edges[s][i].first;
        if (!visited[v])
        {
            par[v] = s;
            dfs(v);
        }
    }
}
void path(int d)
{
    if (d == 0)
        return;
    path(par[d]);
    cout << d << ' ';
}
void solve()
{
    cin >> n >> m;
    while (m--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        edges[u].pb({v, c});
        edges[v].pb({u, c});
    }
    dfs(1);
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " : " << par[i] << endl;
    }
    path(5);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.o", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
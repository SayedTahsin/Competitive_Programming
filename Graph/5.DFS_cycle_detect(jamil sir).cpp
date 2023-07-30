//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int n, m;
int visited[10000];
vector<pair<int, int>> edges[1000];
int cycle = 0;
void dfs(int s)
{
    visited[s] = 1; // grey
    for (int i = 0; i < edges[s].size(); i++)
    {
        int v = edges[s][i].first;
        if (visited[v] == 1)
            cycle = 1;
        if (visited[v] == 0)
            dfs(v);
    }
    visited[s] = 2;
}

void solve()
{
    cin >> n >> m;
    while (m--)
    {
        int u, v, c = 0;
        cin >> u >> v;
        edges[u].pb({v, c});
    }
    dfs(1);
    if (cycle)
        cout << "cycle Detected\n";
    else
        cout << "NO cycle\n";
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
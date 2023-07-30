//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int n, m, a, b;
int par[10000], ssize[10000];
vector<pair<int, int>> edges;
void init()
{
    for (int i = 0; i < n; i++)
    {
        par[i] = i;
        ssize[i] = 1;
    }
}
int findp(int u)
{
    if (par[u] == u)
        return u;
    else
        return par[u] = findp(par[u]);
}
void unionset(int u, int v)
{
    u = findp(u);
    v = findp(v);
    if (u != v)
    {
        if (ssize[u] > ssize[v])
            swap(u, v);
        par[u] = v;
        ssize[v] += ssize[u];
        ssize[u] = 0;
    }
}
void solve()
{
    cin >> n >> m;
    init();
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        edges.push_back({a, b});
    }
    for (int i = 0; i < m; i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        if (findp(u) == findp(v))
        {
            cout << u << ' ' << v << endl;
            cout << "cycle detected\n";
            return;
        }
        else
            unionset(u, v);
    }
    cout << "No cycle detected\n";
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
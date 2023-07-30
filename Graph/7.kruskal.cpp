//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>

using namespace std;
int n, m;
int u, v, w;
vector<pair<int, pair<int, int>>> edge;
int par[10000];
int findP(int u)
{
    if (u == par[u])
        return u;
    return par[u] = findP(par[u]);
}
int kruskal()
{
    sort(edge.begin(), edge.end()); // mlogm
    int cost = 0, cnt = 0;
    for (int i = 0; i < m; i++) // mlogm
    {
        u = edge[i].second.first;
        v = edge[i].second.second;
        w = edge[i].first;

        u = findP(u);
        v = findP(v);
        if (v == u)
            continue;
        cost += w;
        cnt++;
        par[v] = u;
        cout << u << ' ' << v << ' ' << w << endl;
        if (cnt == n - 1)
            break;
    }
    return cost;
}
void solve()
{
    // mlogm+mlogm
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        par[i] = i;

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        edge.push_back({w, {u, v}});
    }

    int cost = kruskal();
    cout << cost << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.o", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
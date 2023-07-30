//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<pair<int, int>> graph[10000];
    int vis[1000];
    memset(vis, -1, sizeof(vis));
    int n, m, v, u, w;
    cin >> n >> m;
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        graph[u].push_back({w, v});
        graph[v].push_back({w, u});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});
    while (!pq.empty())
    {
        int p = pq.top().second;
        int pw = pq.top().first;
        pq.pop();
        if (vis[p] != -1)
            continue;
        vis[p] = pw;
        for (int i = 0; i < graph[p].size(); i++)
        {
            int c = graph[p][i].second;
            int cw = graph[p][i].first;
            if (vis[c] == -1)
                pq.push({cw, c});
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += vis[i];
        cout << vis[i] << ' ';
    }
    cout << sum << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.o", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
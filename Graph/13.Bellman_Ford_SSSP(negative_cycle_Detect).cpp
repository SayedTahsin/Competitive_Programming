//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
using namespace std;
#define fore(arr) for (auto &x : (arr))
#define pb push_back
// it works for negative edges and negative cycles
// it can detecte negative cycles as well
const int INF = 1e9 + 1;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edg;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edg.pb({u, v, w});
        // edg.pb({v, u, w});
    }
    vector<int> dis(n + 1, INF);
    int s;
    cin >> s;
    dis[s] = 0;
    bool cy = false;
    for (int i = 0; i < n - 1; i++)
    {
        cy = false;
        fore(edg)
        {
            int u = x[0];
            int v = x[1];
            int w = x[2];
            if (dis[v] > dis[u] + w)
                cy = true;
            dis[v] = min(dis[v], dis[u] + w);
        }
    }
    if (cy) cout << "Negative cycle detected." << endl;
    for (int i = 1; i <= n; i++)
        cout << dis[i] << ' ';
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
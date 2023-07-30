//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#include <algorithm>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
#define FILL(x, y) memset(x, y, sizeof(x))
#define fore(arr) for (auto &x : (arr))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))

using namespace std;

int cs = 1;
int n, m, s;
int u, v, w;
void solve()
{
    cout << "Case " << cs++ << ":\n";
    cin >> n >> m;
    vector<pair<int, int>> graph[501];
    vector<int> visited(501, 1000000000);
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v >> w;
        graph[u].push_back({w, v});
        graph[v].push_back({w, u});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    cin >> s;
    visited[s] = 0;
    pq.push({0, s});

    while (!pq.empty())
    {
        pair<int, int> f = pq.top();
        pq.pop();
        int p = f.second;
        for (int i = 0; i < graph[p].size(); i++)
        {
            int c = graph[p][i].second;
            int cw = graph[p][i].first;
            if (visited[c] > visited[p] + cw)
            {
                visited[c] = visited[p] + cw;
                pq.push({visited[c], c});
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 1000000000)
            cout << "Impossible\n";
        else
            cout << visited[i] << endl;
    }
}
int main()
{
    NFS;
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
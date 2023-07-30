#include <bits/stdc++.h>
#define MAX 100005
using namespace std;
vector<int> adj[MAX];
bool vis[MAX] = {0};

bool dfs(int u, int par)
{
    vis[u] = 1;
    bool ans = 0;
    for (int i = 0; i < adj[u].size(); i++)
    {
        int v = adj[u][i];
        if (v == par)
            continue;
        if (vis[v] == true)
        {
            ans = 1;
            continue;
        }
        bool temp = dfs(v, u);
        if (ans == true || temp == true)
            ans = true;
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bool ans = dfs(1, -1);
    if (ans == true)
        cout << "Cycle\n";
    else
        cout << "NOT\n";
}

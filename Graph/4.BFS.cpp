//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
#include <algorithm>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
    
#define ll long long
#define ull unsigned long long
#define pb push_back

#define MAX 214748364
#define MOD 100000007
#define bug cout << "*_*\n"
using namespace std;


int n, e, a, b;
bool vis[1000];
int par[1000];
int level[1000];
vector<int> v[1000];
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    vis[u] = 1;
    par[u] = 0;
    level[u] = 0;
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        cout << f << " ";
        for (int i = 0; i < v[f].size(); i++)
        {
            int x = v[f][i];
            if (!vis[x])
            {
                q.push(x);
                vis[x] = true;
                level[x] = level[f] + 1;
                par[x] = f;
            }
        }
    }
}
vector<int> path(int s, int d)
{
    vector<int> p;
    while (par[d] != 0)
    {
        p.push_back(d);
        d = par[d];
    }
    p.push_back(d);
    return p;
}
void solve()
{
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        v[a].pb(b);
        v[b].pb(a);
    }
    cout << "BFS: ";
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            bfs(i);
    }
    cout << endl;
    cout << "Level Print: \n";
    for (int i = 1; i <= n; i++)
        cout << i << "->" << level[i] << endl;

    vector<int> p = path(1, 8);
    cout << "shortest path Print(1 to 8):\n";
    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i] << ' ';
    }
    cout << endl;
}

int main()
{
    // NFS;
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

//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
using namespace std;

#define pii pair<int, int>
#define vii vector<pii>
#define pb push_back
#define fore(arr) for (auto &x : (arr))
#define MAX 1000000000
#define MOD 1000000007



vector<pii> g[100006];
vector<int> lev(100006, MAX);
int n, m, x, y;
int bfs()
{
    deque<int> q;
    q.push_back(1);
    lev[1] = 0;
    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop_front();
        fore(g[cur_v])
        {
            int child_v = x.first;
            int wt = x.second;
            if (lev[cur_v] + wt < lev[child_v])
            {
                lev[child_v] = lev[cur_v] + wt;
                if (wt == 1)
                    q.push_back(child_v);
                else
                    q.push_front(child_v);
            }
        }
    }
    return lev[n] == MAX ? -1 : lev[n];
}
void solve()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        if (x == y)
            continue;
        g[x].pb({y, 0});
        g[y].pb({x, 1});
    }
    cout << bfs() << endl;
}
int main()
{
    NFS;
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
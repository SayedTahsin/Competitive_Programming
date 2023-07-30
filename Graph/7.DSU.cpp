//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
using namespace std;

const int lim = 1e5 + 5;
int n, m;
int par[lim], _size[lim];
void init()
{
    for (int i = 1; i <= n; i++)
    {
        par[i] = i;
        _size[i] = 1;
    }
}
int findP(int u)
{
    if (par[u] == u)
        return u;
    return par[u] = findP(par[u]);
}
void union_set(int u, int v)
{
    int pu = findP(u);
    int pv = findP(v);
    if (pu == pv)
        return;
    if (_size[pv] > _size[pu])
        swap(pu, pv);
    par[pv] = pu;
    _size[pu] += _size[pv];
    _size[pv] = 0;
}
void solve()
{
    cin >> n >> m;
    init();
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        union_set(u, v);
    }
    set<int> s;
    for (int i = 1; i <= n; i++) /// total number of components
    {
        s.insert(findP(i));
    }
    cout << s.size() << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
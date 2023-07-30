//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
using namespace std;


vector<int> v[100];
vector<int> f(100, 0);
vector<int> s(100, 0);
int t = 1;
void dfs(int u)
{
    s[u] = t++;
    for (int i = 0; i < v[u].size(); i++)
    {
        int x = v[u][i];
        if (f[x] == 0)
            dfs(x);
    }
    f[u] = t++;
}
void solve()
{
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
    }
    dfs(3);
    for (int i = 1; i <= n; i++)
        cout << i << '-' << s[i] << ' ' << f[i] << endl;
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
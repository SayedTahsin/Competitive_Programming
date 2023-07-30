//*Bismillahir Rahmanir Raheem
//! Light Oj-Marriage Ceremonies
//!  BlackBeard
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define FILL(x, y) memset(x, y, sizeof(x))
const long long INF = 1e18 + 5;
int cs = 1;
inline void CASE() { cout << "Case " << cs++ << ": "; }

bool isSet(int n, int k)
{
    return !(n & (1 << k));
}
int makeSet(int n, int k)
{
    n = n | (1 << k);
    return n;
}
int n, a;
vector<int> v[20];
int dp[20][70000];
int f(int x, int w)
{
    if (w == (1 << n) - 1)
        return 0;
    int ans = -INF;
    if (dp[x][w] != -1)
        return dp[x][w];

    for (int i = 0; i < v[x].size(); i++)
    {
        if (isSet(w, i))
        {
            ans = max(ans, f(x + 1, makeSet(w, i)) + v[x][i]);
        }
    }
    return dp[x][w] = ans;
}
void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        v[i].clear();
    FILL(dp, -1);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            v[i].push_back(a);
        }
    CASE();
    cout << f(0, 0) << endl;
}

main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, m;
int dp[1010];
ll f(ll cur)
{
    if (cur >= m)
        return cur == m;
    if (dp[cur] != -1)
        return dp[cur];

    int a = 0;
    a += f(cur + 1);
    a += f(cur + 2);
    a += f(cur + 3);
    return dp[cur] = a;
}
void solve()
{
    cin >> n >> m;
    memset(dp, -1, sizeof(dp));
    cout << f(n) << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.o", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
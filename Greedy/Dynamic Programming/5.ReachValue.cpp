///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll x;
map<ll, bool> dp;
bool f(ll cur)
{
    if (cur >= x)
        return cur == x;
    if (dp[cur] != 0)
        return dp[cur];
    bool a = 0;
    a = a || f(cur * 10);
    a = a || f(cur * 20);
    return dp[cur] = a;
}
void solve()
{
    cin >> x;
    if (f(1))
        cout << "YES\n";
    else
        cout << "NO\n";
    dp.clear();
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.o", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll x;
map<ll, bool> dp;
map<ll, int> dr;
bool f(ll cur)
{
    if (cur >= x)
        return cur == x;
    if (dp[cur] != 0)
        return dp[cur];
    bool a = 0, b = 0;
    a = f(cur * 10);
    b = f(cur * 20);
    if (a)
        dr[cur] = 10;
    else
        dr[cur] = 20;
    return dp[cur] = a || b;
}
void pr(ll cur)
{
    if (cur > x)
    {
        cout << endl;
        return;
    }
    cout << cur << ' ';
    if (dr[cur] == 10)
        pr(cur * 10);
    else
        pr(cur * 20);
}
void solve()
{
    cin >> x;
    if (f(1))
        pr(1);
    else
        cout << "NO\n";
    dr.clear();
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
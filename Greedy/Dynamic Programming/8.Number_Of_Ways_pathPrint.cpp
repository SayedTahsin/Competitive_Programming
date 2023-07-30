///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, m;
int dp[1010];
int dr[1010];
bool f(ll cur)
{
    if (cur >= m)
        return cur == m;
    if (dp[cur] != -1)
        return dp[cur];

    int a = 0, b = 0, c = 0;

    a = f(cur + 1);
    b = f(cur + 2);
    c = f(cur + 3);

    if (c == 1)
        dr[cur] = 3;
    else if (b == 1)
        dr[cur] = 2;
    else if (a == 1)
        dr[cur] = 1;

    dp[cur] = (a || b) || c;
}
void printPath(ll cur)
{
    cout << cur << ' ';
    if (cur > m)
    {
        cout << endl;
        return;
    }
    if (dr[cur] == 1)
        printPath(cur + 1);
    else if (dr[cur] == 2)
        printPath(cur + 2);
    else if (dr[cur] == 3)
        printPath(cur + 3);
}
void solve()
{
    cin >> n >> m;
    memset(dp, -1, sizeof(dp));
    f(n);
    printPath(n);
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
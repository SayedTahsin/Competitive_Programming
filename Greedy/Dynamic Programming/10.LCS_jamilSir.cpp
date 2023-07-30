///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;

string a, b;
int n, m;
int dp[1000][1000];
int f(int i, int j)
{
    if (i == n || j == m)
        return 0;

    int &ret = dp[i][j];
    if (ret != -1)
        return ret;

    if (a[i] == b[i])
        ret = f(i + 1, j + 1) + 1;
    else
        ret = max(f(i + 1, j), f(i, j + 1));
    return ret;
}
void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> a >> b;
    n = a.length();
    m = b.length();
    cout << f(0, 0) << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    // scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}
///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#define pb push_back
#define MAX 2000010
#define MOD 100000007
#define bug cout << "*_*\n"
using namespace std;
int n, val, a;
vector<pair<int, int>> v;
int dp[1001][100001];
int f(int i, int sum)
{
    if (i == n) return 0;
    int &ret = dp[i][sum];
    if (ret != 0) return ret;
    ret = max(ret, f(i + 1, sum));
    if (v[i].first <= sum) ret = max(ret, v[i].second + f(i + 1, sum - v[i].first));
    return ret;
}
void solve()
{
    cin >> n >> val;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.pb({a, 0});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v[i].second = a;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int x = 0; x <= val; x++)
        {
            dp[i][x] = dp[i + 1][x];
            if (v[i].first <= x)
                dp[i][x] = max(dp[i][x], v[i].second + dp[i + 1][x - v[i].first]);
        }
    }
    cout << dp[0][val] << endl;
    // cout << f(0, val) << endl;
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
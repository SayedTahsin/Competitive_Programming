///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int n, arr[1000], dp[1000];
int f(int i)
{
    if (i == n)
        return 0;
    int &ret = dp[i];
    if (ret != -1)
        return ret;

    int mx = 0;
    for (int j = i + 1; j < n; j++)
        if (arr[j] > arr[i])
            mx = max(mx, f(j));
    return ret = mx + 1;
}
void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for (int i = 0; i <= n; i++)
        cin >> arr[i];
    int mx = 0;
    for (int i = 0; i < n; i++)
        mx = max(mx, f(i));

    cout << mx << endl;
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
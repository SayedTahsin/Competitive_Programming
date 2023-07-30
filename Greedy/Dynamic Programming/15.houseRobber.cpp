//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
using namespace std;
/*
house robber 
cannot rob 2 consecutive house
*/
int dp[10000];
int n, v[100001];
int f(int i)
{
    if (i >= n)
        return 0;
    if (dp[i] != -1)
        return dp[i];

    //pick i
    int ans1 = v[i] + f(i + 2);
    //not pick i
    int ans2 = f(i + 1);
    return dp[i] = max(ans1, ans2);
}
void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << f(0);
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
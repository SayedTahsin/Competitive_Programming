//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
using namespace std;

//!how many n-digit numbers can be created using only digit 5 and 9 ,
//!where no three identical number stand side by side?

int dp[10000];
int f(int n)
{
    if (n == 1)
        return 2;
    if (n == 2)
        return 4;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = f(n - 1) + f(n - 2);
}
void solve()
{
    memset(dp, -1, sizeof(dp));
    cout << f(5) << endl;
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
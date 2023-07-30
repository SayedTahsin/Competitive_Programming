//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
#define FILL(x, y) memset(x, y, sizeof(x))

//! given A ,B and X . find how many number
//! between A and B Has digit sum of X.
string a, b;
int x;
int dp[11][2][92];
int f(int pos, bool isSmall, int digitSum, string &s)
{
    if (pos == s.length())
        return digitSum == x;

    if (dp[pos][isSmall][digitSum] != -1)
        return dp[pos][isSmall][digitSum];

    int hi = s[pos] - '0', ret = 0;
    if (isSmall)
        hi = 9;
    for (int i = 0; i <= hi; i++)
    {
        bool newSmall = isSmall || (i < hi);
        ret += f(pos + 1, newSmall, digitSum + i, s);
    }
    return dp[pos][isSmall][digitSum] = ret;
}
void solve()
{
    cin >> a >> b >> x;
    FILL(dp, -1);
    int y = f(0, 0, 0, b);
    int A = stoi(a);
    A--;
    a = to_string(A);
    FILL(dp, -1);
    int z = f(0, 0, 0, a);
    cout << y - z << endl;
}

main()
{
    NFS;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}

//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

#define FILL(x, y) memset(x, y, sizeof(x))


//! Jimmy writes down the decimal representations of all
//! natural numbers between and including m and n, (m ≤ n).
//!  How many zeroes will he write down?
string a, b, s;
int dp[11][2][2][92];
int n;
int f(int pos, bool isSmall, bool hasStarted, int zero)
{
    if (n == pos)
        return zero;
    if (dp[pos][isSmall][hasStarted][zero] != -1)
        return dp[pos][isSmall][hasStarted][zero];
    int hi = s[pos] - '0';
    if (isSmall)
        hi = 9;
    int ret = 0;
    for (int i = 0; i <= hi; i++)
    {
        bool newIsSmall = isSmall | (i < hi);
        if (!hasStarted)
            ret += f(pos + 1, newIsSmall, (hasStarted | i), zero);
        else
            ret += f(pos + 1, newIsSmall, (hasStarted | i), zero + (i == 0));
    }
    return dp[pos][isSmall][hasStarted][zero] = ret;
}
void solve()
{
    cin >> a >> b;
    FILL(dp, -1);
    n = b.length();
    s = b;
    int x = f(0, 0, 0, 0);
    int A = stoi(a);
    if (A)
    {
        FILL(dp, -1);
        A--;
        a = to_string(A);
        n = a.length();
        s = a;
        int y = f(0, 0, 0, 0);
        cout << x - y << endl;
    }
    else
        cout << x + 1 << endl;
}

main()
{
    NFS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}

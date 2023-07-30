///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
string s;
int n;
int dp[1000];
int dr[1000];
// input: ..#....#...##

int f(int i)
{
    if (i >= n)
        return 0;

    if (dp[i] != -1)
        return dp[i];
    int a = 1e8, b = 1e8;
    if (s[i + 2] != '#')
        a = f(i + 2) + 1;
    if (s[i + 3] != '#')
        b = f(i + 3) + 1;
    if (a < b)
    {
        dp[i] = a;
        dr[i] = 1;
    }
    else
    {
        dp[i] = b;
        dr[i] = 2;
    }
    return dp[i];
}
void g(int i)
{
    if (i >= n)
        return;
    cout << i << ' ';
    if (dr[i] == 1)
        g(i + 2);
    if (dr[i] == 2)
        g(i + 3);
}
void solve()
{
    cin >> s;
    n = s.length();
    memset(dp, -1, sizeof(dp));
    cout << f(0) << endl;
    g(0);
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
/*
5
0
3
6
8
10
*/
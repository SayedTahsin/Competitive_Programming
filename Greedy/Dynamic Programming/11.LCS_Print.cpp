///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

string a, b;
int n, m;
int dp[3000][3000];
int dr[3000][3000];
int f(int i, int j)
{
    if (i == n || j == m)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    int ret;
    if (a[i] == b[j])
    {
        ret = 1 + f(i + 1, j + 1);
        dr[i][j] = 1;
    }
    else
    {
        int a = f(i + 1, j);
        int b = f(i, j + 1);
        if (a > b)
        {
            ret = a;
            dr[i][j] = 2;
        }
        else
        {
            ret = b;
            dr[i][j] = 3;
        }
    }
    return dp[i][j] = ret;
}
void printdr(int i, int j)
{
    if (i == n || j == m)
        return;

    if (dr[i][j] == 1)
    {
        cout << a[i];
        printdr(i + 1, j + 1);
    }
    else if (dr[i][j] == 2)
        printdr(i + 1, j);
    else if (dr[i][j] == 3)
        printdr(i, j + 1);
}
void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> a >> b;
    n = a.length();
    m = b.length();
    cout << f(0, 0) << endl;
    printdr(0, 0);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.o", "w", stdout);
#endif
    int t = 1;
    while (t--)
    {
        solve();
    }
}
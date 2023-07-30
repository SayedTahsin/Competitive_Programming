///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int arr[11][11];
int m, n;
/*
n=10 m=10
val=10^4
*/
int dp[11][11];
int dr[11][11];
int c = 0;
int f(int i, int j)
{
    if (i == n && j == m)
        return arr[i][j];
    if (dp[i][j] != -1)
        return dp[i][j];
    int a = INT_MIN, b = INT_MIN;
    if (i + 1 <= n)
        a = f(i + 1, j) + arr[i][j];
    if (j + 1 <= m)
        b = f(i, j + 1) + arr[i][j];
    if (a > b)
        dr[i][j] = 1;
    else
        dr[i][j] = 2;
    return dp[i][j] = max(a, b); //step 4
}
void printpath(int i, int j)
{
    cout << arr[i][j] << ' ';
    if (i == n && j == m)
        return;
    if (dr[i][j] == 1)
        printpath(i + 1, j);
    else
        printpath(i, j + 1);
}
void solve()
{
    cin >> n >> m;
    memset(dp, -1, sizeof(dp));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];

    cout << f(1, 1) << endl;
    printpath(1, 1);
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
3 3
5 2 4
1 3 5
9 2 7
*/
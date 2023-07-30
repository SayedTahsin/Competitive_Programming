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
int dp[11][11][200000]; //Step 1 // 3rd dimention is for max cur_max
int c = 0;
int f(int i, int j, int cur_sum)
{
    c++;
    if (i == n && j == m)
        return cur_sum + arr[i][j];
    if (dp[i][j][cur_sum] != -1) //step 3
        return dp[i][j][cur_sum];
    int a = INT_MIN, b = INT_MIN;
    if (i + 1 <= n)
        a = f(i + 1, j, cur_sum + arr[i][j]);
    if (j + 1 <= m)
        b = f(i, j + 1, cur_sum + arr[i][j]);
    return dp[i][j][cur_sum] = max(a, b); //step 4
}
void solve()
{
    cin >> n >> m;
    memset(dp, -1, sizeof(dp)); //step 2
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];

    cout << f(1, 1, 0) << endl;
    cout << f(1, 1, 200000) - 200000 << endl; ///if Data contain negetive Number we can jst pass the max_sum ans leter minus it

    cout << c << endl;
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
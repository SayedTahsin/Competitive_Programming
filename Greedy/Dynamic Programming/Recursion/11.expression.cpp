///Bismillahir Rahmanir Raheem
/*
5
1 5 3 2 8
9
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int arr[1000];
int n, sum;
int f(int pos, int cur_sum)
{
    if (pos == n - 1)
        return (sum == cur_sum);
    int a = f(pos + 1, cur_sum + arr[pos + 1]);
    int b = f(pos + 1, cur_sum - arr[pos + 1]);
    return a || b;
}
void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> sum;
    cout << f(0, arr[0]);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
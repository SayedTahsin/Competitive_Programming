///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void rec(int n, int j)
{
    if (n == -1)
        return;
    for (int i = n; i < j - 1; i++)
    {
        cout << ' ';
    }
    for (int i = 1; i <= 2 * n + 1; i++)
        cout << '*';
    cout << endl;
    rec(n - 1, j);
}
void solve()
{
    int n;
    cin >> n;
    rec(n - 1, n);
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
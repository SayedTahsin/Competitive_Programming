///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void rec(int n)
{
    if (n == 0)
    {
        cout << endl;
        return;
    }
    cout << n;
    if (n != 1)
        cout << ' ';
    rec(n - 1);
}
void solve()
{
    int n;
    cin >> n;
    rec(n);
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
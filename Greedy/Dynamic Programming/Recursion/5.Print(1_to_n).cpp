///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
void rec(int n)
{
    if (n == 0)
        return;
    rec(n - 1);
    cout << n << endl;
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
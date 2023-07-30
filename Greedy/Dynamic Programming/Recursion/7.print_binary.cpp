///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

void rec(int n)
{
    if (n == 0)
    {
        return;
    }
    rec(n / 2);
    cout << n % 2;
}
void solve()
{
    int n;
    cin >> n;
    if (n == 0)
        cout << 0 << endl;
    else
    {
        rec(n);
        cout << endl;
    }
}
int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
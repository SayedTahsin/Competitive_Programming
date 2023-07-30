///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x == y)
    {
        cout << "=" << endl;
        return;
    }
    double a = y * ((log10(x))); //x^y
    double b = x * ((log10(y))); //y*x
    if (a > b)
        cout << ">" << endl;
    else if (a < b)
        cout << "<" << endl;
    else
        cout << "=" << endl;
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
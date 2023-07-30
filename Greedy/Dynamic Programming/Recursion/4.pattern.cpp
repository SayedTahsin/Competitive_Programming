///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void f(int n)
{
    if (n == 1)
    {
        cout << "*\n";
        return;
    }
    f(n - 1);
    for (int i = 0; i < n; i++)
        cout << '*';
    cout << endl;
}
void solve()
{
    int n;
    cin >> n;
    f(n);
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
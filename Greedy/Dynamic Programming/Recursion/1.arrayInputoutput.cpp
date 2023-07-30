//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
using namespace std;
int arr[1000];
int n;
void in(int i)
{
    if (i < 0)
        return;
    in(i - 1);
    cin >> arr[i];
}
void out(int i)
{
    if (i < 0)
    {
        return;
    }
    out(i - 1);
    cout << arr[i] << ' ';
}
void solve()
{
    cin >> n;
    in(n - 1);
    out(n - 1);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.o", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
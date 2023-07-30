//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
using namespace std;
int POW(int n, int p)
{
    if (p == 0)
        return 1;
    return n * POW(n, p - 1);
}
int POW2(int n, int p)
{
    if (p == 0)
        return 1;
    int half = POW2(n, p / 2);
    if (p % 2 == 1)
        return half * half * n;
    else
        return half * half;
}
void solve()
{
    int n, p;
    cin >> n >> p;
    cout << POW2(n, p) << endl;
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
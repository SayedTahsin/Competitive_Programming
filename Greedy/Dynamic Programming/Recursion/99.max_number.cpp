///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>
#define fore(arr) for (auto &x : (arr))
using namespace std;
int n;
vector<int> v;
int rec(int n)
{
    if (n == -1)
        return INT_MIN;
    return max(rec(n - 1), v[n]);
}
void solve()
{
    cin >> n;
    v = vector<int>(n);
    fore(v) cin >> x;
    cout << rec(n - 1) << endl;
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
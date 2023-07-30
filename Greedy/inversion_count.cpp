//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
using namespace std;
#define fore(arr) for (auto &x : (arr))
// a[i]>a[j] for i<j  inversion count
// 9 6 8 4 inversion = 5
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    fore(v) cin >> x;

    multiset<int> s;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        s.insert(v[i]);
        int c = distance(s.upper_bound(v[i]), s.end());
        ans += c;
    }
    cout << ans << endl;
}
int main()
{
    NFS;
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
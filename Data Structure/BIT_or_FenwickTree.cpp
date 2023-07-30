//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
using namespace std;
#define ll long long

const int N = 2 * 1e5 + 5;
int n;
vector<int> v;
int BIT[N]; //! 1based
void update(int idx, ll val) //! set v[idx]+=val 
{
    while (idx <= n)
    {
        BIT[idx] += val;
        idx += (idx & -idx);
    }
}
int qry(int idx) //! return the prefix sum form 0 to idx
{
    ll ret = 0;
    while (idx > 0)
    {
        ret += BIT[idx];
        idx ^= (idx & -idx);
    }
    return ret;
}
int buildBIT(int n) //! nlog(n)
{
    for (int i = 1; i <= n; i++)
        update(i, v[i]);
}
void solve()
{
    cin >> n;
    v = vector<int>(n + 5);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    buildBIT(n);
    for (int i = 1; i <= n; i++)
        cout << BIT[i] << ' ';
    cout << endl;
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << qry(r) - qry(l - 1) << endl;
    }
}
int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fore(arr) for (auto &x : (arr))

/*
You are given an array of n numbers. In how many ways can you choose a subset of the numbers with sum x?
*/
// get all subset sum of first half and second half separately then sort the sum's of second half
// now for each element a in first half sum's check how mane of (x-a)  is present in second half sum's

void sum(vector<int> &v, int l, int r, vector<int> &L, vector<int> &R)
{
    int n = r - l;
    for (int i = 0; i < (1 << n); i++)
    {
        int s = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                s += v[l + j];
        }
        if (l == 0 )L.pb(s);
        else R.pb(s);
    }
}
void solve()
{
    // CSES Meet in the Middle
    ll n, S;
    cin >> n >> S;
    vector<int> v(n), L, R;
    fore(v) cin >> x;
    sum(v, 0, n / 2, L, R);
    sum(v, n / 2, n, L, R);
    ll ans = 0;
    sort(all(R));
    if (R.empty())R.pb(0);
    for (int i = 0; i < L.size(); i++)
    {
        int ub = upper_bound(all(R), S - L[i]) - R.begin();
        int lb = lower_bound(all(R), S - L[i]) - R.begin();
        ans += (ub - lb);
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
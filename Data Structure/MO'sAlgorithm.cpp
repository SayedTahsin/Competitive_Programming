//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
using namespace std;

int rootN;
struct Q
{
    int idx, l, r;
    bool operator<(const Q &ob) const
    {
        if (l / rootN == ob.l / rootN)
            return ((l / rootN) & 1) ? r > ob.r : r < ob.r;
        return l < ob.l;
    }
};
Q q[100005];
void solve()
{
    int n, l, r;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    rootN = sqrtl(n);
    int queries;
    cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        cin >> l >> r;
        q[i].l = l, q[i].r = r, q[i].idx = i;
    }
    sort(q, q + queries);

    vector<int> ans(queries);
    int curr_l = 0, curr_r = -1;
    int curr_ans = 0;
    for (int i = 0; i < queries; i++)
    {
        l = q[i].l, r = q[i].r;
        l--, r--; //! since the indexing is 0 base and queries are one base
        while (curr_r < r)
            curr_r++, curr_ans += a[curr_r];
        while (curr_l > l)
            curr_l--, curr_ans += a[curr_l];
        while (curr_l < l)
            curr_ans -= a[curr_l], curr_l++;
        while (curr_r > r)
            curr_ans -= a[curr_r], curr_r--;
        ans[q[i].idx] = curr_ans;
    }
    for (int i = 0; i < queries; i++)
        cout << ans[i] << endl;
}

//!MO's Algo
int rootN;
struct Q
{
    int idx, l, r;
    bool operator<(const Q &ob) const
    {
        if (l / rootN == ob.l / rootN)
            return ((l / rootN) & 1) ? r > ob.r : r < ob.r;
        return l < ob.l;
    }
};
Q q[100005];
void solve()
{
    int n, l, r;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    rootN = sqrtl(n);
    int queries;
    cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        cin >> l >> r;
        q[i].l = l, q[i].r = r, q[i].idx = i;
    }
    sort(q, q + queries);

    vector<int> ans(queries);
    int curr_l = 0, curr_r = -1;
    int curr_ans = 0;
    for (int i = 0; i < queries; i++)
    {
        l = q[i].l, r = q[i].r;
        l--, r--; //! since the indexing is 0 base and queries are one base
        while (curr_r < r)
            curr_r++, curr_ans += a[curr_r];
        while (curr_l > l)
            curr_l--, curr_ans += a[curr_l];
        while (curr_l < l)
            curr_ans -= a[curr_l], curr_l++;
        while (curr_r > r)
            curr_ans -= a[curr_r], curr_r--;
        ans[q[i].idx] = curr_ans;
    }
    for (int i = 0; i < queries; i++)
        cout << ans[i] << endl;
}
//!------------------------

int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/Error.txt", "w", stderr);
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
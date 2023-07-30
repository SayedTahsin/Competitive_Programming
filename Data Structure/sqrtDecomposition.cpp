//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
using namespace std;
#define fore(arr) for (auto &x : (arr))
int Block[200005];
vector<int> v;
int preprocess(int n)
{
    int cur_blk = -1;
    int blk_sz = sqrt(n);
    for (int i = 0; i < n; i++)
    {
        if (i % blk_sz == 0)
            cur_blk++; // new block
        Block[cur_blk] += v[i];
    }
    return blk_sz;
}
int qry(int blk_sz, int l, int r)
{
    int sum = 0;
    while (l < r && l % blk_sz != 0)
    {
        sum += v[l];
        l++;
    }
    while (l + blk_sz <= r)
    {
        sum += Block[l / blk_sz];
        l += blk_sz;
    }
    while (l <= r)
    {
        sum += v[l];
        l++;
    }
    return sum;
}
void update(int blk_sz, int i, int val)
{
    int blk_no = i / blk_sz;
    Block[blk_no] -= v[i];
    Block[blk_no] += val;
    v[i] = val;
}
//! complexity 3*sqrt(n)
void solve()
{
    int n, q, l, r;
    cin >> n;
    v.resize(n);
    fore(v) cin >> x;
    int blk_size = preprocess(n);
    cin >> q;
    while (q--)
    {
        cin >> l >> r;
        l--, r--;
        cout << qry(blk_size, l, r) << endl;
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
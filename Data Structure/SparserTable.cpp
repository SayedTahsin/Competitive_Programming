//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
using namespace std;

vector<int> v;
int sparse_table[32][100005];
void build_sparse_table(int n)
{
    for (int i = 1; i <= n; i++)
        sparse_table[0][i] = v[i];
    for (int k = 1; k < 32; k++)
    {
        for (int i = 1; i + (1 << k) - 1 <= n; i++)
        {
            sparse_table[k][i] = min(sparse_table[k - 1][i], sparse_table[k - 1][i + (1 << (k - 1))]);
        }
    }
}
int query(int L, int R)
{
    int len = R - L + 1;
    int k = 1, i = 0;
    for (; k <= len; i++)
        k *= 2;
    k = i - 1;
    len = (1 << k);
    return min(sparse_table[k][L], sparse_table[k][R - len + 1]);
}
void solve()
{
    int n;
    cin >> n;
    v = vector<int>(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    build_sparse_table(n);
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << query(l, r) << endl;
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
    while (t--)
    {
        solve();
    }
}




























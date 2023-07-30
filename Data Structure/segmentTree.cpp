//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
using namespace std;

const int N = 2 * 1e5 + 5;

int arr[N];
int Tree[4 * N];
void init(int node, int b, int e)
{
    if (b == e)
    {
        Tree[node] = arr[b];
        return;
    }
    int left = node * 2, right = node * 2 + 1, mid = (b + e) / 2;
    init(left, b, mid);
    init(right, mid + 1, e);
    Tree[node] = Tree[left] + Tree[right];
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b) // out
        return 0;
    if (b >= i && e <= j) // relevent segment
        return Tree[node];
    int left = node * 2; // aro vangte hobe
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(left, b, mid, i, j);
    int p2 = query(right, mid + 1, e, i, j);
    return p1 + p2; // left and right side r sum
}
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b) // out
        return;
    if (b >= i && e <= i) // relevent segment
    {
        Tree[node] = newvalue; // assiging new value
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(left, b, mid, i, newvalue);
    update(right, mid + 1, e, i, newvalue);
    Tree[node] = Tree[left] + Tree[right];
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    init(1, 1, 7);
    // for (int i = 1; i <= 13; i++)
    //     cout << Tree[i] << ' ';
    int l, r;
    cin >> l >> r;
    cout << query(1, 1, 7, l, r);
    update(1, 1, 7, 4, 5);
    cin >> l >> r;
    cout << query(1, 1, 7, l, r);
}
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
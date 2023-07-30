//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
using namespace std;
#define fore(arr) for (auto &x : (arr))

int KadanesAlgo(vector<int> &v) // maxSubArray
{
    int mxsofar = INT_MIN, mxendthis_index = 0;
    for (int i = 0; i < v.size(); i++)
    {
        mxendthis_index += v[i];
        mxendthis_index = max(mxendthis_index, v[i]);
        mxsofar = max(mxsofar, mxendthis_index);
    }
    return mxsofar;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    fore(v) cin >> x;
    // check for every index maxtillnow with current index ans compare it with max_so_far
    int mxsofar = INT_MIN, mxendthis_index = 0;
    for (int i = 0; i < n; i++)
    {
        mxendthis_index += v[i];
        mxendthis_index = max(mxendthis_index, v[i]);
        mxsofar = max(mxsofar, mxendthis_index);
    }
    cout << mxsofar << endl;
    cout << KadanesAlgo(v);
}

// 8
// -2 -3 4 -2 -1 1 5 -3
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
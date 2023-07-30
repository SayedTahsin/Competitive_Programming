//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
#define all(x) (x).begin(), (x).end()
#define fore(arr) for (auto &x : (arr))
//! give max sum of k consecutive element's
int cs = 1;

int slidingWindow(vector<int> &v, int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += v[i];
    int ans = sum;
    for (int i = 0; i < (int)v.size() - k; i++)
    {
        sum -= v[i];
        sum += v[i + k];
        ans = max(ans, sum);
    }
    return ans;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += v[i];
    int ans = sum;
    for (int i = 0; i < n - k; i++)
    {
        sum -= v[i];
        sum += v[i + k];
        ans = max(ans, sum);
    }
    cout << ans << endl;
    cout << slidingWindow(v, k) << endl;
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
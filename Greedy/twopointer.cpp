//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#include <algorithm>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fore(arr) for (auto &x : (arr))

using namespace std;
//! 3sum
// Tree element's of array == target

bool ThreeSum(vector<int> &v, int target)
{
    sort(all(v));
    for (int i = 0; i < v.size(); i++)
    {
        int lo = i + 1, hi = (int)v.size() - 1;
        while (lo < hi)
        {
            int cur = v[i] + v[lo] + v[hi];
            if (cur == target)
            {
                cout << v[i] << ' ' << v[lo] << ' ' << v[hi] << endl;
                return true;
            }
            else if (cur < target)
                lo++;
            else
                hi--;
        }
    }
    return false;
}
void solve()
{
    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    fore(v) cin >> x;
    sort(all(v));
    for (int i = 0; i < n; i++)
    {
        int lo = i + 1, hi = n - 1;
        while (lo < hi)
        {
            int cur = v[i] + v[lo] + v[hi];
            if (cur == target)
            {
                cout << v[i] << ' ' << v[lo] << ' ' << v[hi] << endl;
                return;
            }
            else if (cur < target)
                lo++;
            else
                hi--;
        }
    }
    cout << "false\n";
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
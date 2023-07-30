//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
#define eps 1e-9


using namespace std;

//! AMCS03
int n, k;
pair<double, double> arr[100005];
double f(double x)
{
    double mn = 1e18, mx = -1e18;
    for (int i = 0; i < n; i++)
    {
        double pos = arr[i].first * x + arr[i].second;
        mn = min(mn, pos);
        mx = max(mx, pos);
    }
    return (mx - mn);
}
void solve()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;

    double lo = 0.0, hi = k;
    while ((hi - lo) >= eps)
    {
        double m1 = lo + (hi - lo) / 3.0;
        double m2 = hi - (hi - lo) / 3.0;
        if ((f(m1) - f(m2)) > eps)
            lo = m1;
        else
            hi = m2;
    }
    cout << fixed << setprecision(6) << f(lo) << endl;
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
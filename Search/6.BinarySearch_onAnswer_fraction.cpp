///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define EPS 1e-13
using namespace std;
// There are n ropes, you need to cut k pieces of the same
// length from them. Find the maximum length of pieces you can get.
int n, k;
vector<int> a(n);
bool ok(double x)
{
    int ans = 0;
    for (auto i : a)
        ans += (i / x);
    return ans >= k;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.txt", "w", stdout);
#endif
    cin >> n >> k;
    a = vector<int>(n);
    for (auto &x : a)
        cin >> x;
    double l = 0, r = 1e7 + 10;
    for (int i = 1; i <= 100; i++)
    {
        double m = (l + r) / 2;
        if (ok(m))
            l = m;
        else
            r = m;
    }
    printf("%.6lf\n", l); /// can print l or r; /// both values are too close
}
// 4 11
// 802
// 743
// 457
// 539

// while (abs(l - r) > EPS)
// {
//     double m = (l + r) / 2;
//     if (ok(m))
//         l = m;
//     else
//         r = m;
//  }

 
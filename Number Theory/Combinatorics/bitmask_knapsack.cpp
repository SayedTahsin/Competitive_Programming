///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
#define lcm(x, y) (x * y) / __gcd(x, y)
//! what is the maximum value can be taken in the knapsack
void solve()
{
    int cap, k;
    cin >> k;
    vector<int> w(k), p(k);
    for (int i = 0; i < k; i++)
        cin >> w[i] >> p[i];
    cin >> cap;

    int ans = 0;
    for (int mask = 0; mask < (1 << k); mask++)
    {
        int cur_wt = 0, cur_pr = 0;
        for (int i = 0; i < k; i++)
        {
            if (mask & (1 << i))
            {
                cur_wt += w[i];
                cur_pr += p[i];
            }
        }
        if (cur_wt <= cap)
            ans = max(ans, cur_pr);
    }
    cout << ans << endl;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.o", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
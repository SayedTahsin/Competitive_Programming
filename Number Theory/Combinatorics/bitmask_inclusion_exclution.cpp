///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;

//!   |AUB|=|A|+|B|-|A^B|                                   //|A^B|==(n/lcm(a,b))
//!   |AUBUC|=|A|+|B|+|C|-|A^B|-|A^C|-|B^C|+|AUBUC|         //|A^B|==(n/lcm(a,b))
//^   k elements has 2^k subsets
//& How many elements are there form 1-N that is devide by a or b?
#define lcm(x, y) (x * y) / __gcd(x, y)
void solve()
{
    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> v(k);
    for (auto &x : v)
        cin >> x;
    for (int mask = 0; mask < (1 << k); mask++)
    {
        int cnt = 0;
        int div = 1;
        for (int i = 0; i < k; i++)
        {
            if (mask & (1 << i))
            {
                div = lcm(div, v[i]);
                cnt++;
            }
        }
        ll x = n / div;
        cout << ans << ' ' << x << endl;

        if (cnt % 2 == 1)
            ans = ans - x;
        else
            ans = ans + x;
        // cout << ans << endl;
    }
    cout << ans << endl;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
using namespace std;
int n, target;
vector<int> v;
int f(int target)
{
    if (target == 0)
        return 0;
    int ans = 2e9;
    for (auto coin : v)
    {
        if (coin > target)
            continue;
        int baki = target - coin;
        ans = min(ans, 1 + f(baki));
    }
    return ans;
}
int f1(int pos, int target)
{
    if (target == 0)
        return 0;
    if (pos == n)
        return 2e9;
    int niye_ans = 1 + f1(pos + 1, target - v[pos]);
    int na_niye_ans = f1(pos + 1, target);
    return min(niye_ans, na_niye_ans);
}
void solve()
{
    cin >> n >> target;
    v.resize(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << f1(0, target);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.o", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
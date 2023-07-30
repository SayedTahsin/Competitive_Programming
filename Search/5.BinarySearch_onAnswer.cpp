///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#define ll long long
using namespace std;
/// solution must be a monotnic function
/// 0000000111111
/// What is the minimum length of square that fill the area of H*W rectengle with atmost n square?? 
ll n, w, h;
bool ok(ll x)
{
    return (x / h) * (x / w) >= n;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.txt", "w", stdout);
#endif
    cin >> w >> h >> n;
    int l = -1, r = 1;
    while (!ok(r))
        r *= 2;
    while (l + 1 < r)
    {
        int m = (l + r) / 2;
        if (ok(m))
            r = m;
        else
            l = m;
    }
    cout << r << endl;
}

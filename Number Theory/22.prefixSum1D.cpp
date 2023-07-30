///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fore(arr) for (auto &x : (arr))
template <class T>
void print(vector<T> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}

void solve()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 1; i <= 9; i++)
        v[i] += v[i - 1];

    print(v);
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
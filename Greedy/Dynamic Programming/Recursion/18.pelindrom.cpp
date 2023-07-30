//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
using namespace std;
string s;
bool isPelindrom(int l, int r)
{
    if (l >= r)
        return true;
    if (s[l] == s[r])
        return isPelindrom(l + 1, r - 1);
    else
        false;
}
void solve()
{
    cin >> s;
    int str_len = s.length();
    s = ' ' + s;
    cout << isPelindrom(1, str_len) << endl;
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
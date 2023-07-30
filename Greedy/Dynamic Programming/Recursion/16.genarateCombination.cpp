//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100];
void f(int n, string res = "")
{
    if (n == 0)
    {
        cout << res << endl;
        return;
    }
    f(n - 1, res + "0"); // can genarate lucky number with 4 7
    f(n - 1, res + "1");
}
void solve()
{
    f(4);
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
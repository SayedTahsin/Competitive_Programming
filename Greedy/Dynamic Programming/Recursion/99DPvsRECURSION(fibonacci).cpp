///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
/*
///Resursion steps

1. function define
2. state
3. Base Case
4. transiction/ resursive call
5. current state work

*/
int arr[1000];
int dp = 0, rec = 0;

int fib(int n)
{
    rec++;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
int f(int n)
{
    dp++;
    if (n == 1)
        return arr[n] = 0;
    if (n == 2)
        return arr[n] = 1;
    if (arr[n] != -1)
        return arr[n];
    return arr[n] = f(n - 1) + f(n - 2);
}
void solve()
{
    memset(arr, -1, sizeof(arr));
    fib(20);
    f(20);
    cout << "RECURSION: ";
    cout << rec << endl;
    cout << "Dynamic Programming: ";
    cout << dp << endl;
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
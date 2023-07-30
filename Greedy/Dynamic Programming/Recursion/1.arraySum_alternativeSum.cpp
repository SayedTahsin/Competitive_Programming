//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
using namespace std;
int arr[1000];
int n;
int sum(int i)
{
    if (i == n)
        return 0;
    return arr[i] + sum(i + 1);
} 
int altersum(int i) /// 1 - 2 + 3 - 4 + 5 
{
    if (i == n)
        return 0;
    return arr[i] - altersum(i + 1);
}
void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << sum(0) << endl;
    cout << altersum(0) << endl;
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
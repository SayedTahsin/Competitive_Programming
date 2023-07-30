//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100];
void subset_print(int pos, string res = "")
{
    if (pos == n)
    {
        cout << res << endl;
        return;
    }
    subset_print(pos + 1, res + " " + to_string(arr[pos]));
    subset_print(pos + 1, res);
}
void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    subset_print(0, "");
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
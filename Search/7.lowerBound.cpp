///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
///Maximum index which is not greater than X
//first jekhane x insert kora jabe
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    int x;
    cin >> x;
    int l = -1; //a[l]<=x
    int r = n;  //a[r]>x
    while (l + 1 < r)
    {
        int m = (l + r) / 2;
        if (a[m] >= x)
            r = m;
        else
            l = m;
    }
    cout << l + 1 << endl;
    cout << lower_bound(a.begin(), a.end(), x) - a.begin();
}

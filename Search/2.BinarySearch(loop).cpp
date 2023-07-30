///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
/*
    x=13          x
    arr= [3,8,10,13,20,25,27,30,40]
    (-1)l                          r(n)
    arr[l]<=x
    arr[r]>x

    while(l+1<r){
        m=(l+r)/2;
        if(arr[m]>x)r=m;
        else l=m;
    }
*/
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
        if (a[m] > x)
            r = m;
        else
            l = m;
    }
    if (a[l] == x)
        cout << "YES\n";
    else
        cout << "NO\n";

    bool y = binary_search(a.begin(), a.end(), x);
    if (y)
        cout << "YES\n";
    else
        cout << "NO\n";
    cout << lower_bound(a.begin(), a.end(), x) - a.begin() << endl; //first jekhane x insert kora jabe
    cout << upper_bound(a.begin(), a.end(), x) - a.begin() << endl; //last jekhane x insert kora jabe
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.txt", "w", stdout);
#endif
    double a = 30.0, b = 9.9 * 3 + 0.3;
    cout << a << endl;
    cout << b << endl;
    if (a == b)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";
    if (abs(a - b) < 0.0001) ///for 10^-4
        cout << "equal\n";
    else
        cout << "NOR equal\n";
}

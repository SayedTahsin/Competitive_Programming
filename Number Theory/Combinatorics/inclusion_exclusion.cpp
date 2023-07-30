///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;

//!   |AUB|=|A|+|B|-|A^B|                                   //|A^B|==(n/lcm(a,b))
//!   |AUBUC|=|A|+|B|+|C|-|A^B|-|A^C|-|B^C|+|AUBUC|         //|A^B|==(n/lcm(a,b))
//^   k elements has 2^k subsets
//& How many elements are there form 1-N that is devide by a or b?
#define lcm(x, y) (x * y) / __gcd(x, y)
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << (n / a) + (n / b) - (n / lcm(a, b));
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
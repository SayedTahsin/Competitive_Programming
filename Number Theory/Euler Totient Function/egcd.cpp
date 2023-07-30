#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
                81x + 57y = 3

    gcd(81,57)       gcd(b,a%b)         3 = 9 - 1*6
    81 = 1*57 + 24   gcd(57,24)         3 = 9 - 1*(24-2*9)
    57 = 2*24 + 9    gcd(24,9)          3 = 9 - 24 + 2*9
    24 = 2*9  + 6    gcd(9,6)           3 = 3*9 - 24
    9  = 1*6  + 3    gcd(6,3)           3 = 3*(57 - 2*24) - 24    
    6  = 2*3  + 0    gcd(3,0)           3 = 3*57 - 6*24 - 24
    gcd=   3 -----------(a,b=0)         3 = 3*57 - 7*24
    ax + by  = gcd(a,b)                 3 = 3*57 - 7*(81 - 1*57)
    a*1+ b*0 = a                        3 = 3*57 - 7*81 + 7*57
                                        3 = 10*57 - 7*81
                                        3 = -7 * 81 + 10 * 57
                                        x = -7 & y = 10
*/
ll egcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1; //a*1(x)+ b*0(y) = a
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    cout << x << ' ' << y << '(' << a << '/' << b << ')' << endl;
    return d;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif

    ll x, y;
    cout << egcd(81, 57, x, y) << endl;
    cout << x << ' ' << y << endl;
}
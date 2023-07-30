#include <bits/stdc++.h>
#define lln long long
using namespace std;
lln big_mod(lln b, lln p, lln m)
{
    if (p == 0)
        return 1;
    else if (p % 2 == 0)
    {
        lln temp = (big_mod(b, p / 2, m)) % m;
        return (temp * temp) % m;
    }
    else
    {
        return ((b % m) * (big_mod(b, p - 1, m) % m)) % m;
    }
}
int main()
{
    lln b, p, m;
    while (cin >> b >> p >> m)
    {
        cout << big_mod(b, p, m) << endl;
    }
}
//(b^p)%m
/*
   2^30
    |
2^15 2^15
      |
    2^1 2^14
         |
      2^7 2^7
           |
        2^1 2^6
             |
             2^3 2^3
                  |
                  2^1 2^2
                        |
                        2^1 2^1
*/

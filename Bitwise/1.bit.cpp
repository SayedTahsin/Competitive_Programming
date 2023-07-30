#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b;
    c = a & b;
    d = a | b;
    e = ~a;
    f = a ^ b; //if(2 bits are same than 0) else 1
    cout << c << " " << d << " " << e << " " << f << endl;
    return 0;
}

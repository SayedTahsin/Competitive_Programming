#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    a = a << 2; ///a<<n -> a*2^n //multiply a with 2 n times
    b = b >> 2; ///a>>n -> a/a^n //divide b by 2     n times

    cout << a << " " << b << endl;
}

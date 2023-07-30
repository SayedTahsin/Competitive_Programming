///is bth bit is set/unset?
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e;
    // cin >> a >> b;
    a = 5;
    b = 1;
    d = 1 << (b - 1);
    int x = a & d;
    cout << x << endl;
    if (a & d)
        cout << "SET\n";
    else
        cout << "Unset\n";

    return 0;
}
/*
101100110 = a
   100000 =1<<(b-1)
__________________
   100000
*/

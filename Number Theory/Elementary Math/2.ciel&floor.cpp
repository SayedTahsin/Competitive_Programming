#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a = 11, b = 5;
    int floor = 11 / 5;
    cout << "Floor: " << floor << endl;

    int ciel = (11 + (5 - 1)) / 5;
    cout << "ciel: " << ciel << endl;

    int x = -10.5, y = 3.3;
    cout << "Round: " << x + ((y / 2) / y) << endl; //[ x > 0]
    //cout << "Round: " << x - ((y / 2) / y) << endl; //[x < 0]
    
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        cout << i << "\n"[i != n];
    }
    cout << "ok\n";
}

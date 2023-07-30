#include <bits/stdc++.h>
using namespace std;

double roundx(double x)
{
    return x < 0 ? ceil(x - 0.5) : floor(x + 0.5);
}
int main()
{
    double a = 11, b = 5;
    int floor = 11 / 5;
    cout << "Floor: " << floor << endl;

    int ciel = (11 + (5 - 1)) / 5;
    cout << "ciel: " << ciel << endl;

    cout << roundx(10.49) << endl;
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        cout << i << "\n"[i != n];
    }
    cout << "ok\n";
}

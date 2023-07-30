#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = -17, b = 5;
    cin >> a >> b;
    cout << a % b << endl;
    cout << ((a % b) + b) % b << endl;
}
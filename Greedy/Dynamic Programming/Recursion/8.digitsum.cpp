///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int rec(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + rec(n / 10);
}
int main()
{
    cout << rec(123);
}
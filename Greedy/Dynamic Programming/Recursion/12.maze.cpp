///Bismillahir Rahmanir Raheem
/*
0. define fucntion
1.state
2. base case
3.recursive call
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int r = 4, c = 5;
string mx[10] = {".*...",
                 "*.*.*",
                 ".*...",
                 "...#."};
int f(int x, int y)
{
    if (mx[x][y] == '#')
        return 1;
    int a = 0, b = 0;
    if (mx[x][y + 1] != '*' && y + 1 < c)
        a = f(x, y + 1); //right
    if (mx[x + 1][y] != '*' && x + 1 < r)
        b = f(x + 1, y); //down
    return a || b;
}
void solve()
{
    cout << f(0, 0) << endl;
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
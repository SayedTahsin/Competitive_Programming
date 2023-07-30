///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

template <class T>
void print(vector<T> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}

vector<vector<int>> v = {
    {0, 0, 0, 0, 0, 0},
    {0, 1, 2, 2, 4, 1},
    {0, 3, 4, 1, 5, 2},
    {0, 2, 3, 3, 2, 4},
    {0, 6, 3, 2, 1, 3}};

//* Given A(i,j),C(k,l)
//! so D=(k,j-1)
//! so B=(i-1,L)
//! so A=(i-1,j-1)
//! sum= C-B-D+A
int sum_range(int i, int j, int k, int l)
{
    return v[k][l] - v[k][j - 1] - v[i - 1][l] + v[i - 1][j - 1];
}

void solve()
{
    //! Accumilate each Row
    for (int i = 1; i < v.size(); i++)
    {
        for (int j = 1; j < v[0].size(); j++)
        {
            v[i][j] += v[i][j - 1];
        }
    }
    //! Accumilate Each column
    for (int j = 1; j < v[0].size(); j++)
    {
        for (int i = 1; i < v.size(); i++)
        {
            v[i][j] += v[i - 1][j];
        }
    }

    cout << sum_range(2, 3, 3, 5) << endl;
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
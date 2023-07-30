//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
using namespace std;
/*

- Rat in a maze
    - Check if we can reach the destination
    - Count the number of ways we can reach the destination
    - Print the valid paths with R and D 
    - Print the coordinates of the valid paths
    - Print the valid paths in a 0/1 matrix
*/
int r, c;
string grid[1000];
bool haspath(int x, int y)
{
    if (x == r - 1 && y == c - 1)
        return true;
    if (x == r || y == c)
        return false;
    if (grid[x][y] == '#')
        return false;
    return haspath(x, y + 1) || haspath(x + 1, y);
}
int countPaths(int x, int y)
{
    if (x == r - 1 && y == c - 1)
        return 1;
    if (x == r || y == c)
        return 0;
    if (grid[x][y] == '#')
        return 0;
    return countPaths(x, y + 1) + countPaths(x + 1, y);
}
void printPaths(int x, int y, string res = "")
{
    if (x == r - 1 && y == c - 1)
    {
        cout << res << endl;
        return;
    }
    if (x == r || y == c)
        return;
    if (grid[x][y] == '#')
        return;
    printPaths(x, y + 1, res + "R");
    printPaths(x + 1, y, res + "D");
}
vector<pair<int, int>> ans;
void printcordinates(int x, int y)
{
    if (x == r - 1 && y == c - 1)
    {
        for (auto el : ans)
        {
            cout << "(" << el.first << ", " << el.second << ") ";
        }
        cout << "(" << r - 1 << ", " << c - 1 << ") " << endl;
        return;
    }
    if (x == r || y == c || grid[x][y] == '#')
        return;
    ans.push_back({x, y});
    printcordinates(x, y + 1);
    printcordinates(x + 1, y);
    ans.pop_back();
}
int path[100][100];
void printPathMatrix(int x, int y)
{
    if (x == r - 1 && y == c - 1)
    {
        path[r - 1][c - 1] = 1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << path[i][j] << ' ';
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    if (x == r || y == c || grid[x][y] == '#')
        return;
    path[x][y] = 1;
    printPathMatrix(x, y + 1);
    printPathMatrix(x + 1, y);
    path[x][y] = 0;
}
void solve()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        cin >> grid[i];
    }
    // cout << haspath(0, 0) << endl;
    // cout << countPaths(0, 0) << endl;
    // printPaths(0, 0, "");
    // printcordinates(0, 0);
    // printPathMatrix(0, 0);
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.o", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
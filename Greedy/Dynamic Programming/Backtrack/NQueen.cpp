//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
using namespace std;
int n;
char board[100][100];
bool isSafe(int x, int y)
{
    for (int i = 0; i < x; i++) //column
    {
        if (board[i][y] == 'Q')
            return false;
    }
    int i = x, j = y;
    while (i >= 0 && j < n) //right diagonal
    {
        if (board[i][j] == 'Q')
            return false;
        i--;
        j++;
    }
    i = x, j = y;
    while (i >= 0 && j >= 0) //left diagonal
    {
        if (board[i][j] == 'Q')
            return false;
        i--;
        j--;
    }
    return true;
}
void nQueen(int row)
{
    if (row == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j];
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafe(row, col))
        {
            board[row][col] = 'Q';
            nQueen(row + 1);
            board[row][col] = '_';
        }
    }
}
int countQueen(int row)
{
    if (row == n)
        return 1;
    int total = 0;
    for (int col = 0; col < n; col++)
    {
        if (isSafe(row, col))
        {
            board[row][col] = 'Q';
            total += countQueen(row + 1);
            board[row][col] = '_';
        }
    }
    return total;
}
void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            board[i][j] = '_';
        }
    }
    // nQueen(0);
    cout << countQueen(0);
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
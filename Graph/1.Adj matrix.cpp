#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int adj[n + 1][n + 1] = {0};
    for (int i = 1; i <= m; i++)
    {
        int v, e;
        cin >> v >> e;
        adj[v][e] = 1;
        adj[e][v] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adj[i][j] << ' ';
        }
        cout << endl;
    }
}

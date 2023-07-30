//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
#include <algorithm>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)

#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define yes cout << "yes" << endl
#define No cout << "No" << endl
#define NO cout << "NO" << endl
#define no cout << "no" << endl

#define ll long long
#define ull unsigned long long
#define pb push_back

#define FILL(x, y) memset(x, y, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fore(arr) for (auto &x : (arr))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x *(y / gcd(x, y))
#define toint(c) c - 48
#define tochar(c) c + 48

#define MAX 214748364
#define MOD 100000007
#define bug cout << "*_*\n"
#define X first
#define Y second
#define pii pair<int, int>

using namespace std;

template <class T>
void print(vector<T> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}

int n, m;
string grid[100];
map<pii, int> level;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
bool valid(int x, int y)
{
    if (x < 0 || y < 0)
        return false;
    if (grid[x][y] != '#' && x >= 0 && x < n && y >= 0 && y < m)
        return 1;
    return 0;
}
void bfs(pii s)
{
    queue<pii> q;
    q.push(s);
    level[s] = 0;
    while (!q.empty())
    {
        pii u = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int xx = u.X + dx[i];
            int yy = u.Y + dy[i];
            if (valid(xx, yy) && level.find({xx, yy}) == level.end())
            {
                level[{xx, yy}] = level[{u.X, u.Y}] + 1;
                q.push({xx, yy});
            }
        }
    }
}
void solve()
{
    string st;
    cin >> n >> m;
    pii s, d;
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'S')
                s.X = i, s.Y = j;
            if (grid[i][j] == 'G')
                d.X = i, d.Y = j;
        }
    }

    bfs(s);
    int dest = level[d];
    cout << dest << endl;
}

int main()
{
    // NFS;
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

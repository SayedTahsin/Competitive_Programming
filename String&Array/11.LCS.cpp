///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define PI 2 * acos(0.0)
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define fore(arr) for (auto &x : (arr))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define SORT(v) sort((v).begin(), (v).end())
#define FIND(v, x) ((v).find(x) != (v).end())
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x *(y / gcd(x, y))
#define MAX 2000010
#define bug cout << "*_*\n"
using namespace std;
void print(vector<ll> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}
int ciel(double a, double b)
{
    return (a + (b - 1)) / b;
}
int toint(char c)
{
    return c - 48;
}
char tochar(int c)
{
    return (c + 48);
}
void print(vector<int> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}
int n, m;
int arr[101][101];
void solve()
{
    cin >> n >> m;
    vector<int> a, b, v;
    a.pb(0);
    b.pb(0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.pb(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.pb(x);
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (b[i] == a[j])
            {
                arr[i][j] = arr[i - 1][j - 1] + 1;
            }
            else
            {
                arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
            }
        }
    }
    // print(a);
    // for (int i = 1; i <= m; i++)
    // {
    //     cout << b[i] << '-';
    //     for (int j = 1; j <= n; j++)
    //         cout << arr[i][j] << " ";
    //     cout << endl;
    // }
    int i = m, j = n;
    vector<int> ans;
    while (arr[i][j] != 0)
    {
        if (arr[i - 1][j - 1] == (arr[i][j] - 1))
        {
            if (a[j] == b[i])
            {
                // cout << b[i] << ' ';
                ans.pb(b[i]);
                i--;
                j--;
            }
            else
            {
                if (arr[i][j - 1] <= arr[i - 1][j])
                    i--;
                else
                    j--;
            }
        }
        else
        {
            if (arr[i][j - 1] <= arr[i - 1][j])
                i--;
            else
                j--;
        }
    }
    reverse(all(ans));
    print(ans);
}
int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
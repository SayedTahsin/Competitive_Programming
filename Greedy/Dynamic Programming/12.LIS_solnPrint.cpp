//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
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
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>
#define pb push_back
#define ff first
#define ss second

#define PQiimn priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>
#define PQllmn priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>>
#define PQiimx priority_queue<pair<int, int>>
#define PQllmx priority_queue<pair<ll, ll>>
#define PQ priority_queue<int>

#define FILL(x, y) memset(x, y, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fore(arr) for (auto &x : (arr))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x *(y / gcd(x, y))
#define PI (acos(-1.0))
#define SZ(x) (int)x.size()
#define EPS (1e-9)
#define MAX 214748364
#define MOD 1000000007

#define bug cout << "*_*\n"

using namespace std;
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
int dxk[] = {-2, -2, -1, -1, 1, 2, 2, 1};
int dyk[] = {1, -1, 2, -2, 2, 1, -1, -2};
int dx1[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy1[] = {1, 1, 0, -1, -1, -1, 0, 1};

int cs = 1;
template <class T>
inline void print(vector<T> v) { fore(v) cout << x << ' '; }
inline ll Pow(ll c, ll d) { return d == 0 ? 1 : c * pow(c, d - 1); }
inline ll ciel(double a, double b) { return (a + (b - 1)) / b; }
inline void CASE() { cout << "Case " << cs++ << ":" << endl; }
inline int numOfDigit(ll n) { return log10(n) + 1; }
inline int bitsInBinary(ll n) { return log2(n) + 1; }

ll ar[1001], st[1001][1001], path[1001][1001];
int n;
ll lis(ll in, ll last)
{
    if (in == n)
        return 0;
    if (st[in][last] != -1)
        return st[in][last];
    ll ans = 0;
    ans = lis(in + 1, last);
    path[in][last] = 0;
    if (ar[in] > last)
    {
        ll tmp = lis(in + 1, ar[in]) + 1;
        if (tmp > ans)
        {
            ans = tmp;
            path[in][last] = 1;
        }
    }
    return st[in][last] = ans;
}
vector<ll> soln;
void sp(ll in, ll last)
{
    if (in == n)
        return;
    if (path[in][last] == 1)
    {
        soln.pb(in);
        sp(in + 1, ar[in]);
    }
    else
        sp(in + 1, last);
}
void solve()
{
    cin >> n;
    FILL(st, -1);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int ans = lis(0, LLONG_MIN);
    cout << ans << endl;
}
int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.o", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
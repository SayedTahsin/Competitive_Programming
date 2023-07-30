#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define M 300005
struct Hash
{
    ll val1 = 0, val2 = 0;
    ll base1 = 1827017, base2 = 5195977;
    ll mod1 = 100888001, mod2 = 133767331;
};

ll binexpo(ll a, ll b, ll mm)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % mm;
        a = (a * a) % mm;
        b /= 2;
    }
    return ans;
}
vector<pair<ll, ll>> hsh(M), pow_base(M), invmod(M);
void precal()
{
    Hash x;
    pow_base[0].first = pow_base[0].second = 1;
    for (int i = 1; i < M; i++)
    {
        pow_base[i].first = (pow_base[i - 1].first * x.base1) % x.mod1;
        pow_base[i].second = (pow_base[i - 1].second * x.base2) % x.mod2;
    }
    //! inv
    ll inv_mod1 = binexpo(x.base1, x.mod1 - 2, x.mod1);
    ll inv_mod2 = binexpo(x.base2, x.mod2 - 2, x.mod2);
    invmod[0].first = invmod[0].second = 1;
    for (int i = 1; i < M; i++)
    {
        invmod[i].first = (invmod[i - 1].first * inv_mod1) % x.mod1;
        invmod[i].second = (invmod[i - 1].second * inv_mod2) % x.mod2;
    }
}

void build(string s)
{
    Hash x;
    int n = s.length(), i;
    hsh[0].first = hsh[0].second = s[0] - 'a' + 1;
    for (i = 1; i < n; i++)
    {
        hsh[i].first = (hsh[i - 1].first + ((s[i] - 'a' + 1) * pow_base[i].first) + x.mod1) % x.mod1;
        hsh[i].second = (hsh[i - 1].second + ((s[i] - 'a' + 1) * pow_base[i].second) + x.mod2) % x.mod2;
    }
}

pair<int, int> getHash(int x, int y)
{
    Hash XX;
    int res1 = (hsh[y].first + ((x == 0) ? 0 : -hsh[x - 1].first) + XX.mod1) % XX.mod1;
    res1 = (res1 * invmod[x].first) % XX.mod1;

    int res2 = (hsh[y].second + ((x == 0) ? 0 : -hsh[x - 1].second) + XX.mod2) % XX.mod2;
    res2 = (res2 * invmod[x].second) % XX.mod2;
    return {res1, res2};
}
main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    string s;
    int n, k;
    precal();
    while (t--)
    {
        cin >> n >> k;
        cin >> s;
        build(s);
        set<pair<int, int>> st;
        // for (int i = 0; i < n; i++)
        //     cout << pow_base[i].first << ' ' << pow_base[i].second << endl;
        // for (int i = 0; i < n; i++)
        //     cout << invmod[i].first << ' ' << invmod[i].second << endl;
        // for (int i = 0; i < n; i++)
        //     cout << hsh[i].first << ' ' << hsh[i].second << endl;
        for (int i = 0; i <= n - k; i++)
        {
            st.insert(getHash(i, i + k - 1));
        }
        cout << st.size() << endl;
    }
}
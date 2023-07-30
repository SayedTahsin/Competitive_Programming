//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define fore(arr) for (auto &x : (arr))

#define MAX 2000010
#define MOD 100000007
using namespace std;

vector<int> primes;
void sieve()
{
    bool isPrime[32000];
    for (int i = 0; i < 32000; i++)
        isPrime[i] = true;
    for (int i = 3; i * i <= 32000; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= 32000; j += i)
                isPrime[j] = false;
        }
    }

    primes.pb(2);
    for (int i = 3; i < 32000; i += 2)
        if (isPrime[i])
            primes.pb(i);
}
void segment_sieve(ll l, ll r)
{
    bool isPrime[r - l + 1];
    memset(isPrime, 1, sizeof(isPrime));
    if (l == 1)
        isPrime[0] = false;
    for (int i = 0; primes[i] * primes[i] <= r; i++)
    {
        int curPrime = primes[i];
        ll base = (l / curPrime) * curPrime;
        if (base < l)
            base += curPrime;
        for (int ll j = base; j <= r; j += curPrime)
            isPrime[j - l] = false;
        if (base == curPrime)
            isPrime[base - l] = true;
    }
    for (int i = 0; i < r - l + 1; i++)
        if (isPrime[i])
            cout << i + l << endl;
}
void solve()
{
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        segment_sieve(l, r);
        cout << endl;
    }
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
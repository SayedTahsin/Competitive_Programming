//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fore(arr) for (auto &x : (arr))
using namespace std;

// //! how many primes between 1 -> n ? => n / ln(n)

// bool is_prime(ll n) //! sqrt(n)  //checking all number between 1 to sqrt(n);
// {
//     if (n <= 1)
//         return 0;
//     for (ll i = 2; i * i <= n; i++)
//         if (n % i == 0)
//             return 0;
//     return 1;
// }

// vector<int> primes;
// void sieve_1e7(int n)
// {
//     primes = vector<int>(n + 1, 0);
//     // primes  [0 2 3 2 5 3 7 2 3 5  11 3  13 7  5]
//     //idx      [1 2 3 4 5 6 7 8 9 10 11 12 13 14 15]
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (primes[i] == 0)
//             for (int j = i * i; j <= n; j += i)
//                 primes[j] = i;
//     }
//     for (int i = 2; i <= n; i++)
//         if (primes[i] == 0)
//             primes[i] = i;
// }
// vector<int> factors_1e7(int n) //! log(n)
// {
//     vector<int> fac;
//     while (primes[n] != 0)
//     {
//         fac.pb(primes[n]);
//         n /= primes[n];
//     }
//     return fac;
// }

// vector<int> pr;                           //! array of primes
// vector<int> lp(100000, 0), hp(100000, 0); //! lowest prime & highest prime
// void sieve(int n)                         //! n*ln(ln(n))   //! genereting all prime between 1 to n
// {
//     vector<bool> _isPrime(n + 1, true);
//     _isPrime[0] = _isPrime[1] = false;
//     //! i=2 -- n
//     //! n/2 + n/3 + n/4 + n/5 + n/6 + n/7 +...+ n/n
//     //! n*(1/2 + 1/3 + 1/4 + 1/n)
//     //! n * ln(ln(n))

//     for (int i = 2; i * i <= n; i++)
//     {
//         if (_isPrime[i])
//             for (int j = i * i; j <= n; j += i)
//             {
//                 _isPrime[j] = false;
//                 hp[j] = i;
//                 if (lp[j] == 0)
//                     lp[j] = i;
//             }
//     }
//     for (int i = 0; i <= n; i++)
//         if (_isPrime[i])
//             pr.pb(i);

//     for (int i = 1; i <= 10000; i++) //! printing highest & lowest prime
//     {
//         cout << lp[i] << ' ' << hp[i] << endl;
//     }
//     int num = 100;
//     vector<int> facto;
//     while (num > 1) //! factorization using highest prime
//     {
//         int factor = hp[num];
//         if (factor == 0)
//             factor = num;
//         while (num % factor == 0)
//         {
//             num /= factor;
//             facto.pb(factor);
//         }
//     }
// }

// bool isprime(ll n) //! sqrt(n)/ln(sqrt(n)) //checking all primes between 1 to sqrt(n)
// {
//     if (n <= 1)
//         return 0;
//     int idx = 0;
//     ll i = pr[idx];
//     while (i * i <= n)
//     {
//         if (n % i == 0)
//             return 0;
//         i = pr[++idx];
//     }
//     return 1;
// }

// vector<ll> factors(ll n)
// {
//     vector<ll> fac;
//     int idx = 0;
//     int p = pr[idx];
//     while (p * p <= n)
//     {
//         while (n % p == 0)
//         {
//             n /= p;
//             fac.pb(p);
//         }
//         p = pr[++idx];
//     }
//     if (n > 1)
//         fac.pb(n);

//     return fac;
// }

// vector<int> primes;
// void sieve3()
// {
//     bool isPrime[32000];
//     for (int i = 0; i < 32000; i++)
//         isPrime[i] = true;
//     for (int i = 3; i * i <= 32000; i += 2)
//     {
//         if (isPrime[i])
//         {
//             for (int j = i * i; j <= 32000; j += i)
//                 isPrime[j] = false;
//         }
//     }

//     primes.pb(2);
//     for (int i = 3; i < 32000; i += 2)
//         if (isPrime[i])
//             primes.pb(i);
//     // for (int i = 0; i < 10; i++)
//     //     cout << primes[i] << ' ';
//     // cout << endl;
// }
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

vector<int> divs[100000];
void divisor()
{
    for (int i = 2; i <= 10000; i++)
    {
        for (int j = i; j <= 10000; j += i)
            divs[j].pb(i);
    }
    for (int i = 1; i <= 10000; i++)
    {
        for (int x : divs[i])
            cout << x << ' ';
        cout << endl;
    }
}
void solve()
{
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
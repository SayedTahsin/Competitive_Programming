#define pll pair<ll, ll>
const pll M = make_pair(1910270027, 1910270927); /// Should be large primes
const int base = 191027;                         /// Should be a prime larger than highest value
const int N = 1e6 + 7;                           /// Highest length of string
pll pb[N];                                       /// powers of base mod M
pll invb;

pll operator+(pll a, ll x) { return make_pair(a.ff + x, a.ss + x); }
pll operator-(pll a, ll x) { return make_pair(a.ff - x, a.ss - x); }
pll operator*(pll a, ll x) { return make_pair(a.ff * x, a.ss * x); }
pll operator+(pll a, pll x) { return make_pair(a.ff + x.ff, a.ss + x.ss); }
pll operator-(pll a, pll x) { return make_pair(a.ff - x.ff, a.ss - x.ss); }
pll operator*(pll a, pll x) { return make_pair(a.ff * x.ff, a.ss * x.ss); }
pll operator%(pll a, pll m) { return make_pair(a.ff % m.ff, a.ss % m.ss); }
ostream &operator<<(ostream &os, pll hash)
{
    return os << "(" << hash.ff << ", " << hash.ss << ")";
}
pll power(pll a, ll p)
{
    if (p == 0)
        return make_pair(1, 1);
    pll ans = power(a, p / 2);
    ans = (ans * ans) % M;
    if (p % 2)
        ans = (ans * a) % M;
    return ans;
}
pll inverse(pll a)
{
    return power(a, (M.ff - 1) * (M.ss - 1) - 1);
}
void hashPre()
{
    pb[0] = make_pair(1, 1);
    for (int i = 1; i < N; i++)
        pb[i] = (pb[i - 1] * base) % M;
    invb = inverse(pb[1]);
}
struct HASH
{
    vector<pll> ans = vector<pll>(N);
    int n = 0;
    void hashList(string s)
    {
        int lim = s.size();
        ans[0] = make_pair(0, 0);
        n++;
        for (int i = 1; i <= lim; i++)
        {
            ans[i] = (ans[i - 1] * base + s[i - 1]) % M;
            n++;
        }
    }
    void push(char c)
    {
        if (n == 0)
        {
            ans[0] = make_pair(0, 0);
            n++;
        }
        ans[n] = (ans[n - 1] * base + c) % M;
        n++;
    }
    pll getHash(int l, int r)
    {
        int len = (r - l + 1);
        return ((ans[r] - ans[l - 1] * pb[len]) % M + M) % M;
    }
};

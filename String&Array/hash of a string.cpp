typedef long long LL;
typedef pair<LL, LL> PLL;

const PLL M = mp(1e9 + 7, 1e9 + 9); /// Should be large primes
const LL base = 347;                /// Should be a prime larger than highest value
const int N = 2e6 + 7;              /// Highest length of string

ostream &operator<<(ostream &os, PLL hash)
{
    return os << "(" << hash.ff << ", " << hash.ss << ")";
}

PLL operator+(PLL a, LL x) { return mp(a.ff + x, a.ss + x); }
PLL operator-(PLL a, LL x) { return mp(a.ff - x, a.ss - x); }
PLL operator*(PLL a, LL x) { return mp(a.ff * x, a.ss * x); }
PLL operator+(PLL a, PLL x) { return mp(a.ff + x.ff, a.ss + x.ss); }
PLL operator-(PLL a, PLL x) { return mp(a.ff - x.ff, a.ss - x.ss); }
PLL operator*(PLL a, PLL x) { return mp(a.ff * x.ff, a.ss * x.ss); }
PLL operator%(PLL a, PLL m) { return mp(a.ff % m.ff, a.ss % m.ss); }

PLL power(PLL a, LL p)
{
    if (p == 0)
        return mp(1, 1);
    PLL ans = power(a, p / 2);
    ans = (ans * ans) % M;
    if (p % 2)
        ans = (ans * a) % M;
    return ans;
}

/// Magic!!!!!!!
PLL inverse(PLL a)
{
    return power(a, (M.ff - 1) * (M.ss - 1) - 1);
}

PLL pb[N]; /// powers of base mod M
PLL invb;

/// Call pre before everything
void hashPre()
{
    pb[0] = mp(1, 1);
    for (int i = 1; i < N; i++)
        pb[i] = (pb[i - 1] * base) % M;
    invb = inverse(pb[1]);
}

/// Calculates Hash of a string
PLL Hash(string s)
{
    PLL ans = mp(0, 0);
    for (int i = 0; i < s.size(); i++)
        ans = (ans * base + s[i]) % M;
    return ans;
}

/// appends c to string
PLL append(PLL cur, char c)
{
    return (cur * base + c) % M;
}

/// prepends c to string with size k
PLL prepend(PLL cur, int k, char c)
{
    return (pb[k] * c + cur) % M;
}

/// replaces the i-th (0-indexed) character from right from a to b;
PLL replace(PLL cur, int i, char a, char b)
{
    cur = (cur + pb[i] * (b - a)) % M;
    return (cur + M) % M;
}

/// Erases c from the back of the string
PLL pop_back(PLL hash, char c)
{
    return (((hash - c) * invb) % M + M) % M;
}

/// Erases c from front of the string with size len
PLL pop_front(PLL hash, int len, char c)
{
    return ((hash - pb[len - 1] * c) % M + M) % M;
}

/// concatenates two strings where length of the right is k
PLL concat(PLL left, PLL right, int k)
{
    return (left * pb[k] + right) % M;
}

/// Calculates hash of string with size len repeated cnt times
/// This is O(log n). For O(1), pre-calculate inverses
PLL repeat(PLL hash, int len, LL cnt)
{
    PLL mul = (pb[len * cnt] - 1) * inverse(pb[len] - 1);
    mul = (mul % M + M) % M;
    PLL ans = (hash * mul) % M;

    if (pb[len].ff == 1)
        ans.ff = hash.ff * cnt;
    if (pb[len].ss == 1)
        ans.ss = hash.ss * cnt;
    return ans;
}

/// Calculates hashes of all prefixes of s including empty prefix
vector<PLL> hashList(string s)
{
    int n = s.size();
    vector<PLL> ans(n + 1);
    ans[0] = mp(0, 0);

    for (int i = 1; i <= n; i++)
        ans[i] = (ans[i - 1] * base + s[i - 1]) % M;
    return ans;
}

/// Calculates hash of substring s[l..r] (1 indexed)
PLL substringHash(const vector<PLL> &hashlist, int l, int r)
{
    int len = (r - l + 1);
    return ((hashlist[r] - hashlist[l - 1] * pb[len]) % M + M) % M;
}

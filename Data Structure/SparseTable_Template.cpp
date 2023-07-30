#include <bits/stdc++.h>
using namespace std;

template <typename V, typename T>
struct SparseTable
{
    static int highest_bit(unsigned x) { return x == 0 ? -1 : 31 - __builtin_clz(x); }
    int n, level;
    vector<vector<T>> st;
    /*OPRATION CHANGEABLE*/
    T f(T a, T b)
    {
        return min(a, b);
    }
    void build(const vector<V> &v = {})
    {
        st[0] = v;
        for (int p = 1; p <= level; p++)
        {
            for (int i = 0; i + (1 << p) <= n; i++)
            {
                st[p][i] = f(st[p - 1][i], st[p - 1][i + (1 << (p - 1))]);
            }
        }
    }
    SparseTable(const vector<V> &v) : n((int)v.size()), level(highest_bit(n))
    {
        st.resize(level + 1, vector<T>(n));
        build(v);
    }
    T qryI(int l, int r)
    {
        int sg = highest_bit(r - l + 1);
        return f(st[sg][l], st[sg][r - (1 << sg) + 1]);
    }
    int qeyN(int l, int r)
    {
        T ans = INT_MAX;
        for (int i = level; i >= 0; i--)
        {
            if ((1 << i) <= r - l + 1)
            {
                ans = f(ans, st[i][l]);
                l += (1 << i);
            }
        }
        return ans;
    }
};

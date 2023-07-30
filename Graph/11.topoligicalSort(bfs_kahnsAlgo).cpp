//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
using namespace std;

#define fore(arr) for (auto &x : (arr))


template <class T>
inline void print(vector<T> v) { fore(v) cout << x << ' '; }
vector<int> v[100];
int indegree[100];
int n, m, a, b;
void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        indegree[b]++;
    }
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (!indegree[i])
            q.push(i);
    }
    vector<int> ans;
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        ans.push_back(f);
        fore(v[f])
        {
            indegree[x]--;
            if (indegree[x] == 0)
                q.push(x);
        }
    }
    if (ans.size() == n)
    {
        print(ans);
        cout << endl;
    }
    else
        cout << "IMPOSSIBLE\n";
}
int main()
{
    NFS;
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
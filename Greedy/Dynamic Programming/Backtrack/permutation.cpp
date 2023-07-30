//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
using namespace std;
/*
- Generate permutations
- Generate unique permutations
*/
string s;
set<string> st;
void permute(int pos)
{
    int len = s.length();
    if (pos == len - 1)
    {
        st.insert(s); // for unique permutation
        cout << s << endl;
        return;
    }
    for (int i = pos; i < len; i++)
    {
        swap(s[pos], s[i]);
        permute(pos + 1);
        swap(s[pos], s[i]);
    }
}
bool check(int curr, int swapping_pos)
{
    for (int i = curr; i < swapping_pos; i++)
    {
        if (s[i] == s[swapping_pos])
            return 0;
    }
    return 1;
}
void uniquePermute(int pos)
{
    int len = s.length();
    if (pos == len - 1)
    {
        cout << s << endl;
        return;
    }
    for (int i = pos; i < len; i++)
    {
        if (check(pos, i))
        {
            swap(s[pos], s[i]);
            uniquePermute(pos + 1);
            swap(s[pos], s[i]);
        }
    }
}
void solve()
{
    cin >> s;
    permute(0);
    cout << endl;
    uniquePermute(0);
}
int main()
{
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
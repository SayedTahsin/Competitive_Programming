///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    char letters[] = "BC";
    char answer[4];
    answer[3] = '\0';
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                answer[0] = letters[i];
                answer[1] = letters[j];
                answer[2] = letters[k];
                cout << answer << endl;
            }
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
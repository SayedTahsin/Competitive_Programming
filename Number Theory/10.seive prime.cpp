/*
c=a+b এখানে a আর b এর মধ্যে যেকোনো একটি c এর অর্ধেক থেকে ছোট এর একটি বড় 
c=a*b এখানে a আর b এর একটি অবশ্যই সংখ্যাটির বর্গমূলের থেকে ছোট,অন্যটি বড়
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, j, k;
    cin >> n;
    int flag[n + 1];
    memset(flag, 1, sizeof(flag));
    /*for(int i=1; i<=n; i++)
        flag[i]=1;*/
    flag[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (flag[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                flag[j] = 0;
            }
        }
    }
    int prime[10000];
    int l = 0;
    for (int i = 1; i <= n; i++)
    {
        if (flag[i])
        {
            cout << i << " ";
            prime[l++] = i;
        }
    }
    /*for(int i=1;i<l;i++){
        cout<<prime[i]<<endl;
    }
    */
    return 0;
}

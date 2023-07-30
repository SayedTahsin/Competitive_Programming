///an array has all item 3 times except one .find that number
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i,j,k,x,ans=0;
    cin>>n;
    ll ar[64]= {0};
    for(j=0; j<n; j++)
    {
        cin>>x;
        for(i=0; i<64; i++)
        {
            k = 1LL<<i;
            if(x&k)
            {
                ar[i]++;
            }
        }
    }
    for(i=0; i<64; i++)
    {
        if(ar[i]%3==1)
        {
            ans+=(1LL<<i);
        }
    }
    cout<<ans<<endl;

    return 0;
}

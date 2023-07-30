//how many bits of a,b needs to change to make a|b=c true
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a, b, c, ans=0,k;
    cin>>a>>b>>c;
    for(int i=0; i<64; i++)
    {
        k = 1LL<<i;
        if((c&k)>0)
        {
            if(((a&k)==0) &&((b&k)==0))
            {
                ans++;
            }
        }
        else
        {
            if((a&k)>0)
            {
                ans++;
            }
            if((b&k)>0)
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}

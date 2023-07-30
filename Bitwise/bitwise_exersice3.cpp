/// every distinct pairs  xor sum
#include<bits/stdc++.h>
#define ll long long
#define md 1000000007
using namespace std;

int main()
{

    ll  b, c,n, d, e, i,j, k, x, y, ans=0;
    cin>>n;
    ll a[n];
    for(j=0; j<n; j++)
    {
        cin>>a[j];
    }
    for(i=0; i<64; i++)
    {
        k = 1LL<<i;
        x=0;
        y=0;
        for(j=0; j<n; j++)
        {
            if(a[j]&k)
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        d = x*y;
        e = ((d%md)*(k%md))%md;
        ans+=e;
        ans%=md;
    }
    cout<<ans<<endl;

    return 0;
}

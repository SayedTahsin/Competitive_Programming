#include<stdio.h>
#define ll long long
#define mx 1000005
#define md 1000000007

ll fact[mx];
void calcu()
{
    ll i;
    fact[0]=1;
    for(i=1; i<mx; i++)
    {
        fact[i]=((fact[i-1]%md)*(i%md))%md;
    }
}
ll binar_expo(ll a, ll b)
{
    ll s=1;
    while(b>0)
    {
        if(b%2==1)
        {
            s = ((s%md)*(a%md))%md;
            b--;
        }
        else
        {
            a=((a%md)*(a%md))%md;

            b/=2;
        }
    }
    return s;
}
int main()
{
    ll i, n, r, s=1, ans, e;
    calcu();
    scanf("%lld %lld", &n, &r);
    ans=((fact[n]%md)*((binar_expo(fact[r], md-2))%md))%md;
    ans=((ans%md)*binar_expo(fact[n-r], md-2)%md)%md;
    printf("%lld\n", ans);
    return 0;

}

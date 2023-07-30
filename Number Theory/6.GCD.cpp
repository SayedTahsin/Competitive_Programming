#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    int n,m,k,ma=0;
    cin>>n>>m;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(m%i==0)
            {
                if(i>ma)
                    ma=i;
            }
            k=n/i;
            if(m%k==0)
            {
                if(k>ma)
                    ma=k;
            }
        }
    }
    cout<<"GCD: "<<ma<<endl;
    return 0;
}
int main()
{
    int n,m,y;
    cin>>n>>m;
    while(n%m!=0)
    {
        y=m;
        m=n%m;
        n=y;
    }
    cout<<m;
}
*/
int gcd(int a,int b){
if(b==0) return a;
return gcd(b,a%b);
}
int main(){
printf("%d",gcd(540,201));
return 0;
}

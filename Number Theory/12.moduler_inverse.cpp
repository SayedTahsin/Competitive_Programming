///(a^-1)%m= {a^(m-2)}%m
///a and m should be co-prime
#include<bits/stdc++.h>
#define lln long long
using namespace std;
int main()
{
    lln a,m;
    cin>>a>>m;
    lln s=1;
    for(int i=1;i<=(m-2);i++){
        s*=a;
    }
    a=s;
    cout<<a%m;
}
/*
(p/Q)%m=(p*Q^-1)%m

->(p*Q^(m-2))%m

{(p%m)*((Q^(m-2))%m)}%m
*/

///A^B
#include <bits/stdc++.h>
#define lln long long
using namespace std;
lln big_mod(lln b, lln p, lln m)
{
    if (p == 0)
        return 1;
    else if (p % 2 == 0)
    {
        lln temp = (big_mod(b, p / 2, m)) % m;
        return (temp * temp) % m;
    }
    else
    {
        return ((b % m) * (big_mod(b, p - 1, m) % m)) % m;
    }
}
int main()
{
    lln a, b, s = 1;
    cin >> a >> b;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            s = s * a;
            b--;
        }
        a = a * a;
        b /= 2;
    }
    cout << s << endl;
}
///2^5
///  |
///  2*2^4
///     |
///     4^2
///      |
///      16^1

///A^B%m
/*
int main(){
    lln a,b,m,s=1;
    cin>>a>>b>>m;
    while(b>0){
        if(b%2==1){
            s=((s%m)*(a%m))%m;
            b--;
        }
        a=((a%m)*(a%m))%m;
        b/=2;
    }
    cout<<s<<endl;
}
*/

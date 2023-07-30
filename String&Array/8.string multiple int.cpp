#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str,ans="";
    int carry=0,a,x,n,l;
    cin>>str>>a;
    l=str.size();
    for(int i=l-1; i>=0; i--)
    {
        n=((str[i]-'0')*a)+carry;
        x=n%10;
        carry=n/10;
        ans+=(x+'0');//ans+=char(x+'0');
    }
    ans+=(carry+'0');
    reverse(ans.begin(),ans.end());
    cout<<ans;
}

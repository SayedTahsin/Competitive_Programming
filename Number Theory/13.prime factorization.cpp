#include<bits/stdc++.h>
using namespace std;
void primefact(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        int count;
        if(n%i==0)
        {
            count=0;
            while(n%i==0)
            {
                n=n/i;
                count++;
            }
            cout<<i<<"^"<<count<<' ';
        }
    }
    if(n!=1)
        cout<<n<<"^"<<1<<' ';
}
int main()
{
    int n;
    cin>>n;
    primefact(n);
}

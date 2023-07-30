///(a+b+c.....)%mod => {(a%mod)+(b%mod)+...}%mod
///(a*b*c.....)%mod => {(a%mod)*(b%mod)*...}%mod
///(a-b-c-....)%mod => [{(a%mod)-(b%mod)-...}+mod]%mod
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mod;
    cin>>n>>mod;
    int arr[n],s=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s=((s%mod)+(arr[i]%mod))%mod;
    }
    cout<<s;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int g=__gcd(a,b);
    cout<<"GCD: "<<g<<endl;
    int lcm=(a/g)*b;
    cout<<"LCM: "<<lcm;
    return 0;
}

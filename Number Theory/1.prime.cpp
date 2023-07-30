#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,flag=0;
    cin>>n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            flag=1;
        }
    }
    if(flag)cout<<"NOT Prime\n";
    else cout<<"Prime\n";
    return 0;
}

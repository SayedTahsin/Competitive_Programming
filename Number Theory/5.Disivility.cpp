#include<bits/stdc++.h>
using namespace std;
/*int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0)cout<<i<<endl;
    }
    cout<<n<<endl;
    return 0;
}*/
int main(){
    int n,k;
    cin>>n;
    for(int i=1;i*i<=n;i++){   //i*i for double precise problem
        if(n%i==0){
            cout<<i<<endl;
            k=n/i;
            if(i!=k)cout<<k<<endl;
        }
    }
    return 0;
}
///10 x 10
///5  x 20
///4  x 25
///2  x 50
///1  x 100

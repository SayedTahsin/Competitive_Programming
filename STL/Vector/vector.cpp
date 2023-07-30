#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int x;
    v.push_back(10);
    for(int i=1;i<=3;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
    cout<<endl;
    for(auto x:v)cout<<x<<' ';
}

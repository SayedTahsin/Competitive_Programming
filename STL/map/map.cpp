#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;///sorted(BST) log(n)///unordered map is not sorted(Hashing) log(1)
    m["Dipto"]=55;
    m["Arnob"]=25;
    m["Arnob"]=45;
    m.insert(make_pair("Nabil",40));//m["nabil"]=40;
    cout<<m["Dipto"]<<endl;
    cout<<m["Arnob"]<<endl;


    map<string,int>::iterator it;
    it=m.begin();
    cout<<it->first<<" "<<it->second<<endl;
    it++;
    cout<<it->first<<" "<<it->second<<endl;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

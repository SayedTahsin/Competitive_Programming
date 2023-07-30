#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<string,int>m;///can take same key
    multimap<string,int>::iterator it;

    m.insert(make_pair("dipta",22));
    m.insert(make_pair("dipta",21));
    m.insert(make_pair("dipta",23));
    m.insert(make_pair("Arnab",25));

    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<' '<<it->second<<endl;
    }
}

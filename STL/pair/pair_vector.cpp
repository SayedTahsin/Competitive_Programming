#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int ,string>>v;
    v.push_back(make_pair(21,"Arnob"));
    v.push_back(make_pair(20,"JOhn"));
    v.push_back({19,"nabil"});
    v.push_back({21,"Tahsin"});

    vector<pair<int ,string>>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<it->first<<" "<<it->second<<endl;
}


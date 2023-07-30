#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<string,int>p("Arnob",22);
    cout<<p.first<<" "<<p.second<<endl;
    p.first="Dipto";
    p.second=21;
    cout<<p.first<<" "<<p.second<<endl;
    p=make_pair("Sayed",25);
    cout<<p.first<<" "<<p.second<<endl;
    p={"tahsin",21};
    cout<<p.first<<" "<<p.second<<endl;
}

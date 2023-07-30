#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string>s;//do not carry duplicate & sorted in ascending order
    set<string>::iterator it;
    s.insert("Dipto");
    s.insert("Arnob");
    s.insert("nabil");

    pair<set<string>::iterator,bool> p;
    p=s.insert("Arnob");
     if(p.second==false){
        cout<<"can't insert"<<endl;
     }
     else{
        cout<<"Inserted\n";
     }
}

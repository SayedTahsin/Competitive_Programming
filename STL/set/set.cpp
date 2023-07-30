#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;///do not carry duplicate & sorted in ascending order
    set<int>ss;
    set<int>::iterator it;
    s.insert(5);
    s.insert(12);
    s.insert(52);
    s.insert(1);
    s.insert(123);
    for(it=s.begin();it!=s.end();it++ ){
        cout<<*it<<"\t";
    }
    cout<<endl;
    it=s.find(5);
    s.erase(it);
    cout<<*it<<endl;
    for(it=s.begin();it!=s.end();it++ ){
        cout<<*it<<"\t";
    }
    cout<<endl;
    ss=s;
    int x;
    for(auto x:ss)cout<<x<<' ';
}

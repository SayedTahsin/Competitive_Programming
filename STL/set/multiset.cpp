#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>s;///can take same key
    multiset<int>::iterator it;

    s.insert(100);
    s.insert(100);
    s.insert(100);
    s.insert(100);
    s.insert(1);
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<' ';
    }
}


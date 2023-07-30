#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<pair<int,int>,vector<pair<int,int>> ,greater<pair<int,int> > >s;    //ascending order
    s.push({21,3});
    s.push({22,4});
    s.push({2,4});
    s.push({67,1});
    s.push({2,1});
    s.push({222,3});
    while(!s.empty()){
        cout<<s.top().first<<' '<<s.top().second<<endl;
        s.pop();
    }

}


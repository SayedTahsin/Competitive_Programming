#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>q;                               //descending order
    q.push(400);
    q.push(200);
    q.push(500);
    q.push(100);
    q.push(10);
    q.push(10000);
    while(!q.empty()){
        cout<<q.top()<<endl;
        q.pop();
    }
    cout<<endl;
    priority_queue<int,vector<int> ,greater<int> >s;    //ascending order
    s.push(400);
    s.push(200);
    s.push(500);
    s.push(100);
    s.push(10);
    s.push(10000);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

}

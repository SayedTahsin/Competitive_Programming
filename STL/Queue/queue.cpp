#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(10);
    q.push(1);
    q.push(11);
    q.push(30);
    q.push(0);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}

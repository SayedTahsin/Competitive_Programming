#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string>s;
    s.push("Sayed");
    s.push("Tahsin");
    s.push("NAbil");
    s.push("Dipto");
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}

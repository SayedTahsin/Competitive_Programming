#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> m;
    char x;
    for(int i=1; i<=5; i++)
    {
        cin>>x;
        m[x]++;
    }
    for(int i=1; i<=2; i++)
    {
        cin>>x;
        cout<<x<<": "<<m[x]<<endl;
    }
}


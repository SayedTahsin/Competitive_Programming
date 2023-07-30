#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> m;///sorted log(n)
    m["Dipto"]=55;
    m["Arnob"]=25;
    m["Arnob"]=45;
    m["HE"]=0;
    string s;
    cin>>s;
    if(m.find(s)==m.end())
        cout<<"NOT inserted\n";
    else
        cout<<"Inserted\n";

}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    int x=0;
    for(int i=0; s[i]; i++)
    {
        x=x*10+ s[i]-48;
        while(x<n && x!=0)
        {
            i++;
            x=x*10 +s[i]-48;
        }
        cout<<x/n;
        x=x%n;
    }
    cout<<endl<<"Re1minder: "<<x<<endl;
}

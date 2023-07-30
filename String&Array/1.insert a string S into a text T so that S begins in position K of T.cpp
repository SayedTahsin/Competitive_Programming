//10.	 Write a program to insert a string S into a text T so that S begins in position K of T.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string T,s;
    int tl,sl,k;
    cout<<"Text: ";
    getline(cin,T);
    cout<<"K: ";
    cin>>k;
    cout<<"String to insert: ";
    cin>>s;
    tl=T.length();
    sl=s.length();
    int last=tl+sl-1;
    int x=tl-1;
    for(int i=0; i<tl-k; i++,last--,x--)
    {
        T[last]=T[x];
    }
    for(int i=0; s[i]; i++,k++)
    {
        T[k]=s[i];
    }
    for(int i=0; i<tl+sl; i++)
    {
        cout<<T[i];
    }
    cout<<endl;
    return 0;
}
//C191101
//Sayed Tahsinoor Rahman
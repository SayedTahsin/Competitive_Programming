//11.	 A text T in memory. Write a program to delete a string S of length L from Kth position in T.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string T;
    cout<<"Text: ";
    getline(cin,T);
    int k,tl,L;
    cout<<"K: ";
    cin>>k;
    cout<<"L: ";
    cin>>L;
    tl=T.length();
    int x=k+L;
    for(int i=k; i<L+k; i++,x++)
    {
        T[i]=T[x];
    }
    for(int i=0; i<tl-L; i++)
    {
        cout<<T[i];
    }
    cout<<endl;
    return 0;
}
//C191101
//Sayed tahsinoor Rahman
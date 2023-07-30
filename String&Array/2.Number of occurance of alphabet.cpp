//14. Write a program which calculates the no. of occurrence of each letter of an input text.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int arr[130]= {0};
    for(int i=0; s[i]; i++)
    {
        if(s[i]>='a' &&s[i]<='z' )
            s[i]-=32;
        arr[s[i]]++;
    }
    for(int i=65; i<=90; i++)
    {
        if(arr[i]!=0)
        {
            cout<<char(i)<<": "<<arr[i]<<endl;
        }
    }
    return 0;
}
//Sayed Tahsinoor Rahman
//C191101


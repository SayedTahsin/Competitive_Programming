//9.	Write a program to implement the following string operation without using any built in functions related to string.
#include<bits/stdc++.h>
using namespace std;
/*
//a)	Find the length of a string S

int length(string s)
{
    int count=0;
    for(int i=0; s[i]; i++)
        count++;
    return count;
}
*/

/*
//e)	Reverse a string S.

string rev(string s)
{
    string str="";
    int l=length(s);
    for(int i=l-1; i>=0; i--)
        str+=s[i];
    str[l]='\0';
    return str;
}
*/

int main()
{
    int i;
/*
//b)	Copy string S2 to S1.

            string s1="",s2;
            cin>>s2;
            for(int i=0;s2[i];i++){
                s1+=s2[i];
            }
            s1[i]='\0';
            cout<<s1<<endl;

*/

/*
//c)	Concatenate string S2 to S1.

    string a,b;
        cin>>a>>b;
        for(int i=0; b[i]; i++)
        {
            a+=b[i];
        }
        a[i]='\0';
        cout<<a<<endl;
*/

/*
//d)	Compare two strings S1 and S2

    cout<<"(-1) means the first word should come after the second one.\n";
    cout<<"(0) means words are same.\n";
    cout<<"(1) means the order in right.\n";
        string s,s1;
        cin>>s>>s1;
        int flag=0,cmp;
        int l=(length(s)<length(s1))?length(s):length(s1);
        for(int i=0; i<l; i++)
        {
            if(s[i]!=s1[i])
            {
                if(s[i]<s1[i])
                {
                    flag=1;
                    cmp=1;
                }
                else
                {
                    flag=1;
                    cmp=-1;
                }
            }
        }
        if(flag)
            cout<<cmp<<endl;
        else if(length(s)==length(s1))
            cout<<"0\n";
        else if(length(s)<length(s1))
            cout<<'1'<<endl;
        else
            cout<<"-1"<<endl;
        return 0;
*/
}
//C191101
//Sayed Tahsinoor Rahman


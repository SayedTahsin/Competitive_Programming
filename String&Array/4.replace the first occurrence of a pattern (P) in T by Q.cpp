//12.A text T and patterns P and Q in memory in memory. Write a program to replace the first occurrence of a pattern (P) in T by Q.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t,p,q;
    cout<<"Text: ";
    cin>>t;
    cout<<"P: ";
    cin>>p;
    cout<<"Q: ";
    cin>>q;
    int tl,pl,ql,count,flag=0,z=-1;
    tl=t.length();
    pl=p.length();
    ql=q.length();
    int dif=ql-pl;
    for(int i=0; t[i]; i++)
    {
        if(t[i]==p[0])
        {
            count=0;
            for(int j=i,k=0; p[k]; j++,k++)
            {
                if(t[j]==p[k])
                {
                    count++;
                }
            }
            if(count==pl)
            {
                z=i;
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        if(dif>=0)
        {
            int x=tl-1+dif;
            for(int i=tl-1; i>=z+pl; i--,x--)
            {
                t[x]=t[i];
            }
        }
        if(dif<0)
        {
            int x=z+ql;
            for(int i=z+pl; i<tl; i++,x++)
            {
                t[x]=t[i];
            }
        }
        int y=z;
        for(int i=0; q[i]; i++,y++)
        {
            t[y]=q[i];
        }
        for(int i=0; i<tl+dif; i++)
        {
            cout<<t[i];
        }
        cout<<endl;
    }
    else
        cout<<"P Not found!!!";
    return 0;
}
//C191101
//Sayed Tahsinoor Rahman

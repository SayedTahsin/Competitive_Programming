#include<bits/stdc++.h>
using namespace std;
void ToH(int n,char beg,char aux,char end)
{
    if(n>0)
    {
        ToH(n-1,beg,end,aux);
        cout<<"("<<beg<<","<<end<<")"<<endl;
        ToH(n-1,aux,beg,end);
    }
}
int main()
{
    ToH(3,'A','B','C');
}

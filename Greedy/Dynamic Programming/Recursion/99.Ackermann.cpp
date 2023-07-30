/*
A(m,n):
1.if(m==0) ->A(m,n)=n+1
2.if(m!=0 && n==0) -> A(m,n)=A(m-1,1)
3.if((m!=0 && n!=0)->A(m-1,A(m,n-1))
*/
#include<bits/stdc++.h>
using namespace std;
int ackerman(int m,int n){
    if(m==0)return n+1;
    else if(m!=0 && n==0){
            return ackerman(m-1,1);
    }
    else return ackerman(m-1,ackerman(m,n-1));
}
int main(){
    cout<<ackerman(1,2);
}

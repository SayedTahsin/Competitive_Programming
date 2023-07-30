//13.	 Write a program that will read a string (S) and find the index of the first occurrence of a pattern (P) in the string S.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string T,P;
    int n,count=0,ans=-1;
    cout<<"Text: ";
    cin>>T;
    cout<<"Pattern: ";
    cin>>P;
    int pl=P.length();
    int tl=T.length();
    for(int i=0;i<tl-pl+1;i++){
        if(T[i]==P[0]){
            for(int j=0,x=i;P[j];j++,x++){
                if(T[x]==P[j])count++;
            }
            if(count==pl){
                ans=i;
            }
        }
    }
    cout<<ans+1<<endl;
}

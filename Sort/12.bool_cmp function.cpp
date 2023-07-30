#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool cmp (int a,int b)
{
    if(a>=b)
        return true;
    else
        return false;
}
int main(){
    bool a=1;
    int arr[100]={5,4,3,2,1,-23},i;
    sort(arr,arr+5,cmp);
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

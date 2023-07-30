#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={4,2,1,5,3},len=5,i;
    sort(arr,arr+5);
    for(i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

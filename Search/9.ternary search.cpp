#include<bits/stdc++.h>
using namespace std;
int ternarySearch(int arr[],int left,int right,int x)
{
    if(right-left>0)
    {
        int firstMid=left+(right-left)/3;
        int secondMid=firstMid+(right-left)/3;

        if(arr[firstMid]==x)
            return firstMid;
        if(arr[secondMid]==x)
            return secondMid;
        if(x<arr[firstMid])
            return ternarySearch(arr,left,firstMid,x);
        if(x>arr[secondMid])
            return ternarySearch(arr,secondMid+1,right,x);
        return ternarySearch(arr,firstMid,secondMid,x);
    }
    else
    {
        return -1;
    }
}
int main()
{
    int arr[11]= {1,2,3,4,5,6,7,8,9,10};
    sort(arr,arr+10);
    int right=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter Element to search: ";
    int x;
    cin>>x;
    int ans=ternarySearch(arr,0,right,x);
    if(ans==-1)
        cout<<"elemnet not found!!!\n";
    else
        cout<<"Element Found at index: "<<ans+1<<endl;;
}

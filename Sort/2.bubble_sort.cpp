#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],n,k,temp;
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int i=0,k=1; i<n; i++,k++)
    {
        for(int j=0; j<n-k; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],s,i,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>s;
    for(i=0; i<n; i++)       //search
    {
        if(arr[i]==s)
        {
            cout<<s<<" is present in index "<<i+1<<endl;
            return 0;
        }
    }

    cout<<s<<" isn't present in the array."<<endl;
    return 0;
}

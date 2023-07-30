#include<bits/stdc++.h>
#include<iterator>
#include<list>
using namespace std;
int main()
{
    list<int>li(5);
    list<int>::iterator it;
    for(auto x:li)
        cout<<x<<" ";/// 0 0 0 0 0
    cout<<endl;
    int arr[]= {1,2,3,4,5};
    list<int>li2(arr,arr+5);
    for(auto x:li2)
        cout<<x<<" ";///1 2 3 4 5

}


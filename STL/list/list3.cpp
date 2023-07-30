#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]= {1,3,4,5,1};
    list<int>mylist;
    list<int>::iterator it;
    if(mylist.empty())
    {
        cout<<"Empty\n";
    }
    else
    {
        cout<<"Filled\n";
    }
    list<int>mylist1(arr,arr+5);
    cout<<mylist1.front()<<endl;
    cout<<mylist1.back()<<endl;
    for(it=mylist1.begin();it!=mylist1.end();it++){
        cout<<*it<<"\t";
    }
    cout<<endl;

    mylist1.pop_front();
    mylist1.pop_back();
    for(it=mylist1.begin();it!=mylist1.end();it++){
        cout<<*it<<"\t";
    }
    cout<<endl;
}

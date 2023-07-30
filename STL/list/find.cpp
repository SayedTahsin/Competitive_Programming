#include<bits/stdc++.h>
#include<iterator>
#include<list>
using namespace std;
int main()
{
    list<int>li= {1,2,3,4,5};
    list<int>::iterator it;
    for(auto x:li)
        cout<<x<<" ";
    cout<<endl;
    it=find(li.begin(),li.end(),3);
    cout<<*it<<endl;//3

    li.insert(it,10);

    cout<<*it<<endl;//3

    for(auto x:li)
        cout<<x<<" ";
    cout<<endl;

}




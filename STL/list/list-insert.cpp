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

    it=li.begin();
    it++;
    cout<<*it<<endl;//2

    li.insert(it,10);

    cout<<*it<<endl;//2

    for(auto x:li)
        cout<<x<<" ";
    cout<<endl;

}



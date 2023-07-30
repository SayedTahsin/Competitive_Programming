#include<bits/stdc++.h>
#include<iterator>
#include<list>
using namespace std;
int main()
{
    list<int>li;
    list<int>::iterator it;

    li.push_back(10);
    li.push_back(12);
    li.push_back(5);
    li.push_front(-1);
    li.push_front(3);

    for(it=li.begin(); it!=li.end(); it++)
        cout<<*it<<' ';
    puts("");

    li.reverse();
    for(it=li.begin(); it!=li.end(); it++)
        cout<<*it<<' ';
    puts("");

    cout<<li.size()<<endl;
    li.clear();
    cout<<li.size()<<endl;

    int x;
    list<int> li2(10,5);
    for(auto x:li2)cout<<x<<' ';
}

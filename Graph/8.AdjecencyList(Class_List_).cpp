#include<bits/stdc++.h>
using namespace std;
class graph
{
    int V;
    list<int> *l;
public:
    graph(int v)
    {
        this->V=v;
        l=new list<int>[v];
    }
    void addEdge(int x,int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void PrintAdjList()
    {
        for(int i=0; i<V; i++)
        {
            cout<<"vertex "<<i<<": ";
            for(auto x:l[i])
                cout<<x<<" ";
        cout<<endl;
        }
    }
};
int main()
{
    graph g(5);
    g.addEdge(1,4);
    g.addEdge(2,4);
    g.addEdge(3,4);
    g.addEdge(3,1);
    g.PrintAdjList();
}

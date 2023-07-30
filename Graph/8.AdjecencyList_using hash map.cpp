#include<bits/stdc++.h>
using namespace std;
class graph
{
    unordered_map<string,list<pair<string,int>>> l;
public:
    void addEdge(string x,string y,bool bidir,int wt)
    {
        l[x].push_back(make_pair(y,wt));
        if(bidir)
        {
            l[y].push_back(make_pair(x,wt));
        }
    }
    void  printAdjList()
    {
        for(auto p:l)
        {
            string city=p.first;
            list<pair<string,int>> nbrs=p.second;
            cout<<city<<"->";
            for(auto nbr :nbrs)
            {
                string dest =nbr.first;
                int dist =nbr.second;
                cout<<dest<<"("<<dist<<")"<<",";
            }
            cout<<endl;
        }
    }
};

int main()
{

    graph g;
    g.addEdge("A","B",true,12);
    g.addEdge("A","C",false,11);
    g.addEdge("A","D",true,10);
    g.addEdge("D","B",true,15);
    g.addEdge("C","B",true,20);
    g.printAdjList();
}

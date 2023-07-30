#include<bits/stdc++.h>
using namespace std;
class graph
{
    map<int,list<int>> l;
public:
    void addEdge(int x,int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void dfs_helper(int src,map<int,bool>&visited)
    {
        //recursive function that will traverse the graph
        cout<<src<<" ";
        visited[src]=true;
        for(int nbr: l[src])
        {
            if(!visited[nbr])
            {
                dfs_helper(nbr,visited);
            }
        }
    }

    void DFS(int src)
    {
        map<int,bool>visited;
        // mark all the nodes as not visited in the beginning
        for(auto p:l)
        {
            int node = p.first;
            visited[node]=false;
        }
        //call the helper function
        dfs_helper(src,visited);
    }
};

int main()
{
    graph g;
    g.addEdge(0,1);
    g.addEdge(2,3);
    g.addEdge(0,4);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.DFS(0);
}


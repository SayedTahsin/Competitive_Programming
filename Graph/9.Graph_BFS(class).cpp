#include<bits/stdc++.h>
using namespace std;
class graph
{
    vector<int> l[100];
public:
    void addEdge(int x,int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void BFS(int src)
    {
        bool visited[100];
        queue<int>q;
        q.push(src);
        visited[src]=true;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            cout<<node<<' ';
            for(int nbr:l[node])
            {
                if(!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr]=true;
                }
            }
        }
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
    g.BFS(0);
}

//*Bismillahir Rahmanir Raheem
//! BlackBeard
#include <bits/stdc++.h>
#define NFS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

vector<int> v[1000];
int depth[1000], hight[1000];
void dfs(int vertex, int par)
{
    for (int i = 0; i < v[vertex].size(); i++)
    {
        int child = v[vertex][i];
        if (child == par)
            continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
        hight[vertex] = max(hight[vertex], hight[child] + 1);
    }
}
int main()
{
    
}
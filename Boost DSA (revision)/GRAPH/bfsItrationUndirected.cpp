#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    // unDirected Graph
    // 0(v+e) - time  0(v) - space
    
    int n = 6;
    vector<vector<int>> edges;
    
    edges.push_back({1,2});
    edges.push_back({3,4});
    edges.push_back({1,4});
    edges.push_back({3,5});
    edges.push_back({0,1});
    edges.push_back({3,5});
    edges.push_back({3,1});
    edges.push_back({4,5});
    edges.push_back({2,3});

    vector<vector<int>> adjList(n);

    for(auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    // let be use the source node 2;
    queue<int>q;
    q.push(2);

    vector<bool> visited(n,0);
    visited[2] = true;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        cout<<node<<' ';

        for(auto neighbor : adjList[node])
        {
            if(!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    return 0;
}
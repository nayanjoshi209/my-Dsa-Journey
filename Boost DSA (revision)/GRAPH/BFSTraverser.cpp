#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    int n = 5;
    vector<vector<int>> edges;

    edges.push_back({0,1});
    edges.push_back({2,4});
    edges.push_back({0,4});
    edges.push_back({4,3});
    edges.push_back({2,1});
    edges.push_back({3,2});
    edges.push_back({0,4});
    edges.push_back({0,0});

    vector<vector<int>> adjList(n);

    for(auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    // iteration on all node
    queue<int>q;

    //insert A node as source
    // assume source is 0
    q.push(0);

    vector<int> visited(n,0);
    visited[0] = 1;
    vector<int> ans;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        visited[node] = 1;
        cout<<node<<' ';
        ans.push_back(node);

        for(auto neighbor : adjList[node])
        {
            if(!visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = 1;
            }
        }
    }
    cout<<endl<<ans.size();
    return 0;
}
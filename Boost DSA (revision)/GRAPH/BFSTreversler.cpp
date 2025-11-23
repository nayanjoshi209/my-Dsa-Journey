#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main()
{
    int n = 6;
    vector<vector<int>> edges;

    edges.push_back({0,1});
    edges.push_back({1,4});
    edges.push_back({2,4});
    edges.push_back({5,1});
    edges.push_back({4,5});
    edges.push_back({2,3});
    edges.push_back({1,2});
    edges.push_back({0,2});

    vector<vector<int>> adjList(n);

    for(auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    // vector  store BFS order
    vector<int> ans;
    queue<int> q;

    // let assume 3 is source node
    q.push(3);
    vector<bool> visited(n,0);
    visited[3] = true;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        cout<<node<<' ';
        ans.push_back(node);

        for(auto neighbor : adjList[node])
        {
            if(!visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
    cout<<endl<<ans.size();
    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // Undirected Graph
    int n = 6, m = 5;

    vector<vector<int>> edges;

    edges.push_back({0, 1});
    edges.push_back({1, 2});
    edges.push_back({3, 4});
    edges.push_back({3, 5});
    edges.push_back({4, 5});

    // Corrected declaration of adjacency list
    vector<vector<int>> adjList(n);

    // Building the adjacency list
    for (auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];

        adjList[u].push_back(v);
        // adjList[v].push_back(u); 
    }

    // Displaying the adjacency list
    for (int i=0;i<n; i++)
    {
        cout<<i<<"-> ";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout<<adjList[i][j]<<' ';
        }
        cout <<endl;
    }

    return 0;
}
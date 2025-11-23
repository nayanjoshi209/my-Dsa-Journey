#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // directed graph
    int n = 5, m = 3;
    vector<vector<int>> edges;

    edges.push_back({0,1});
    edges.push_back({2,3});
    edges.push_back({4,4});

    vector<vector<int>> adjList(n);

    for(auto& edge : edges)
    {
        int u = edge[0];
        int v = edge[1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for(int i=0;i<n;i++)
    {
        cout<<i<<"-> ";
        for(int j=0;j<adjList[i].size();j++)
        {
            cout<<adjList[i][j]<<' ';
        }
        cout<<endl;
    }
}

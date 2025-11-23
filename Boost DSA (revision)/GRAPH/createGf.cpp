#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n = 10;
    vector<vector<int>> edges;

    edges.push_back({6,7});
    edges.push_back({7,8});
    edges.push_back({8,9});
    edges.push_back({9,6});
    edges.push_back({2,3});
    edges.push_back({3,5});
    edges.push_back({3,4});

    vector<vector<int>> adjList(n);

    for(auto& edge : edges)
    {
        int u = edge[0];
        int v = edge[1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for(int node =0 ; node < n; node ++)
    {
        cout<<"Values of "<<node<<" there adjList is : ";
        
        for(int neighbor : adjList[node])
            cout<<neighbor<<' ';

        cout<<endl;
    }
    return 0;

}
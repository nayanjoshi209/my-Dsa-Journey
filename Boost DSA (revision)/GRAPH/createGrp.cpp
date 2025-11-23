#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int >> edges;

    edges.push_back({6,7});
    edges.push_back({7,8});
    edges.push_back({8,9});
    edges.push_back({9,6});
    edges.push_back({3,2});
    edges.push_back({3,5});
    edges.push_back({3,4});
    edges.push_back({4,3});

    vector<vector<int>> adjList(10);

    for(auto& edge : edges)
    {
        int u = edge[0];
        int v = edge[1];

        adjList[u].push_back(v);
    }

    for(int node = 0 ; node < 10 ; node++)
    {
        cout<<"Values of "<<node<<" is : ";
        for(auto& neighbor : adjList[node])
            cout<<neighbor<<' ';

        cout<<endl;
    }
    return 0;
}
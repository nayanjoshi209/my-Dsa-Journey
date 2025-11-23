#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n=10;
    vector<vector<int>>edges;

    edges.push_back({1,2});
    edges.push_back({6,7});
    edges.push_back({5,6});
    edges.push_back({4,5});
    edges.push_back({1,6});
    edges.push_back({4,4});
    edges.push_back({0,9});
    edges.push_back({3,5});

    vector<vector<int>> mat(n,vector<int>(n,0));

    for(auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];

        mat[u][v] = 1;
        mat[v][u] = 1;
    }

    // print the matrix
    for(int i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
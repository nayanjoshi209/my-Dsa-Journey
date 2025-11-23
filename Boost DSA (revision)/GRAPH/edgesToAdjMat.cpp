#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n = 5;
    vector<vector<int>> edges;

    edges.push_back({0,1});
    edges.push_back({2,3});
    edges.push_back({4,4});
    // edges.push_back({0,1});
    // edges.push_back({0,1});

    // create Matrix
    // vector<vector<vector<int>>> mat(n,vector<vector<int>>(n,vector<int>(n,0)));
    // vector<vector<vector<vector<int>>>>(n,vector<vector<vector<int>>>(n,vector<vector<int>>(n,vector<int>(n,0))));
    vector<vector<int>>mat(n,vector<int>(n,0));

    for(auto& edge : edges)
    {
        int u = edge[0];
        int v = edge[1];

        mat[u][v] = 1;
        mat[v][u] = 1;

    }

    cout<<"     ";

    for(int i=0;i<n;i++)
        cout<<i<<' ';

    cout<<endl;

    // print the mat;
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
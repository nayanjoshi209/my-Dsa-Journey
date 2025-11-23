#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // 1 base directed graph n = 6 m=5;
    int n = 6;
    int m = 5; // edges
    vector<vector<int>> edges;

    edges.push_back({1,3});
    edges.push_back({2,3});
    edges.push_back({5,6});
    edges.push_back({4,4});
    edges.push_back({1,1});

    // create Mat;

    vector<vector<int>>mat(n+1,vector<int>(n+1,0));
    for(auto& edge : edges)
    {
        int u = edge[0];
        int v = edge[1];

        mat[u][v] = 1;
    }

        // print mat
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<mat[i][j]<<' ';
        }
        cout<<endl;
    }

    // mat to edges
    vector<vector<int>> newEdges;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i+1][j+1] == 1)
            {
                vector<int>res(2,0);
                res[0] = i+1;
                res[1] = j+1;

                newEdges.push_back(res);
            }                
        }
    }

    for(auto& edge : newEdges)
        cout<<"{ "<<edge[0]<<" , "<<edge[1]<<" } "<<endl;
    
    return 0;
}
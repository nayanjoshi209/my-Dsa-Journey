#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // undirect graph
    int n = 5,m = 3;
    vector<vector<int>>edges;

    edges.push_back({0,1});
    edges.push_back({2,3});
    edges.push_back({4,4});

    vector<vector<int>> mat(n,(vector<int>(n,0)));

    for(auto& edge : edges)
    {
        int u = edge[0];
        int v = edge[1];

        mat[u][v] = 1;
        mat[v][u] = 1;
    }

    //print the matrix
    cout<<"     ";
    for(int i=0;i<n;i++)
        cout<<i<<' ';

    cout<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<' ';
        }
        cout<<endl;
    }

    // matToEdgges

    vector<vector<int>>newEdges;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            vector<int> res(2,0);
            if(mat[i][j] == 1)
            {
                res[0] = i;
                res[1] = j;

                newEdges.push_back(res);
            }
        }
    }

    cout<<endl;
    for(auto& edge : newEdges)
        cout<<"[ "<<edge[0]<<" , "<<edge[1]<<" ] "<<endl;

    
    return 0;

}
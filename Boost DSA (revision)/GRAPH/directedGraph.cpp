#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n = 6 , m =5;

    vector<vector<int>> edges;

    edges.push_back({0,1});
    edges.push_back({1,2});
    edges.push_back({3,4});
    edges.push_back({3,5});
    edges.push_back({4,5});

    vector<vector<int>>mat (n,vector<int>(n,0));

    for(auto& edge : edges)
    {
        int u = edge[0];
        int v = edge[1];

        // directed graph
        mat[u][v] = 1;
    }

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

    //create new Edges
    vector<vector<int>> newEdges;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            vector<int> res;
            if(mat[i][j] == 1)
            {
                res.push_back(i);
                res.push_back(j);

                newEdges.push_back(res);
            }
        }
    }

    cout<<endl;

    for(auto& edge : newEdges)
        cout<<"{ "<<edge[0]<<" , "<<edge[1]<<" }"<<endl;

    return 0;
}
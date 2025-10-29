#include<iostream>
#include<vector>
using namespace std;

// 0(v*v) & 0(v*v)

// adjMatrix
// direction weited graph

int main()
{
    int edge,vertex;
    cin>>vertex>>edge;

    // 2d matrix
    vector<vector<int> >adjMatrix(vertex,vector<int>(vertex,0));
    int u,v,weight;

    // set the values
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v>>weight;
        adjMatrix[u][v] = weight;
    }
    
    // print the values
    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
        {
            cout<<adjMatrix[i][j]<<' ';
        }
        cout<<endl;
    }
}
#include<iostream>
#include<vector>
using namespace std;

// adjMatrix
// direction graph

int main()
{
    int edge,vertex;
    cin>>vertex>>edge;

    // 2d matrix
    vector<vector<bool> >adjMatrix(vertex,vector<bool>(vertex,0));
    int u,v;

    // set the values
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        adjMatrix[u][v] = 1;
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
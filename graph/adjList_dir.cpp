#include<iostream>
#include<vector>
using namespace std;

//directed graph(no weight)
int main()
{
    int vertex,edge;
    cin>>vertex>>edge;

    vector<int>adjList[vertex];

    // store the values (update)
    int u,v;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        adjList[u].push_back(v); // one direc
        // adjList[v].push_back(u);
    }

    // print the list

    for(int i=0;i<vertex;i++)
    {
        cout<<i<<" -> "; 
        for(int j=0;j<adjList[i].size();j++)
        {
            cout<<adjList[i][j]<<' ';
        }
        cout<<endl;
    }
}
#include<iostream>
#include<vector>
using namespace std;

//directed graph(no weight)
int main()
{
    int vertex,edge;
    cin>>vertex>>edge;

    vector<pair<int,int> >adjList[vertex];

    // store the values (update)
    int u,v,weight;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v>>weight;
        adjList[u].push_back(make_pair(v,weight)); // one direc
        // adjList[v].push_back(make_pair(u,weight));
    }

    // print the list

    for(int i=0;i<vertex;i++)
    {
        cout<<i<<" -> "; 
        for(int j=0;j<adjList[i].size();j++)
        {
            cout<<adjList[i][j].first<<' '<<adjList[i][j].second<<' ';
        }
        cout<<endl;
    }
}
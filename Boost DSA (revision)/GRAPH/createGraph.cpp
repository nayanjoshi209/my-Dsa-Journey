#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n =5;

   vector<vector<int>> edges;

   edges.push_back({0,3});
   edges.push_back({1,2});
   edges.push_back({2,4});

   vector<vector<int>> adjList(n);

   for(auto& edge : edges)
   {
        int u = edge[0];
        int v = edge[1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
   }

   for(int node = 0 ;node < n; node++ )
   {
        cout<<"The neghtboure of node "<<node<<" is : ";
        for(int neighbor : adjList[node])
            cout<<neighbor<<" ";

            cout<<"\n";
   }

   return 0;
}
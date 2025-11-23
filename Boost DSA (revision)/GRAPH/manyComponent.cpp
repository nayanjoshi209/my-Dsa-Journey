#include <bits/stdc++.h>
using namespace std;

class Solution {
    void BFS(vector<int>& ans,vector<bool>& visited,int source, vector<vector<int>>& adjList)
    {
        queue<int> q;
        q.push(source);
        visited[source] = true;

        while(!q.empty())
        {
            int node = q.front();
            q.pop();

            ans.push_back(node);
            for(auto neighbor : adjList[node])
            {
                if(!visited[neighbor])
                {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

    }
public:
    vector<int> findOrderOfCities(int n, vector<vector<int>>& roads,int i) {
        vector<vector<int>> adjList(n);

        for(auto edge : roads)
        {
            int u = edge[0];
            int v = edge[1];

            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        vector<int> orderByCities;
        vector<bool> visited(n,0);

        // for dis-connect componement
        for(int i=0;i<n;i++)
            if(!visited[i])
                BFS(orderByCities,visited,i,adjList);

        return orderByCities;
    }
};


/*
    There are n cities, The cities are connected by roads, you are given a 2D integer array roads,
    where roads[i] = {u, v} represents city u is connected to city v, and city v is connected to city u.
    Nayan loves to travel a lot, He says he could visit cities in any order, 
    So in which order he should visit the cities, help him find the order.

*/
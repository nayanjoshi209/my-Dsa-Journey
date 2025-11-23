#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findOrderOfCities(int n, vector<vector<int>>& roads) {
        vector<vector<int>> adjList(n);

        for(auto edge : roads)
        {
            int u = edge[0];
            int v = edge[1];

            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        vector<bool>visited(n,0);
        vector<int> orderOfCities;
        queue<int> q;
        q.push(0);
        visited[0] = true;

        while(!q.empty())
        {
            int node = q.front();
            q.pop();

            orderOfCities.push_back(node);
            for(auto neighbor : adjList[node])
            {
                if(!visited[neighbor])
                {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        return orderOfCities;
    }
};


/*
    There are n cities, The cities are connected by roads, you are given a 2D integer array roads,
    where roads[i] = {u, v} represents city u is connected to city v, and city v is connected to city u.
    Nayan loves to travel a lot, He says he could visit cities in any order, 
    So in which order he should visit the cities, help him find the order.

*/
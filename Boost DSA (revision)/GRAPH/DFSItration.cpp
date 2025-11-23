#include <bits/stdc++.h>
using namespace std;

class Solution {
    // 0(v+e) space 0(v) time
    void DFS(int source,vector<int>& res,vector<bool>& visited,vector<vector<int>>& adjList)
    {
        visited[source] = true;
        res.push_back(source);

        for(auto neighbor : adjList[source])
            if(!visited[neighbor])
                DFS(neighbor,res,visited,adjList);
        
    }
public:
    vector<int> findAnimalsOfAllFarms(int n, vector<vector<int>>& edges) {
        vector<int> res;
        vector<bool>visited(n,0);
        vector<vector<int>> adjList(n);

        for(auto edge : edges)
        {
            int u = edge[0];
            int v = edge[1];

            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        DFS(0,res,visited,adjList);
        return res;
    }
};
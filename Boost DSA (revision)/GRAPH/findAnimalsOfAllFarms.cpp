#include <bits/stdc++.h>
using namespace std;

class Solution {
     void DFS(int node,vector<bool>& visited,vector<vector<int>>& adjList)
    {
        visited[node] = true;

        for(auto neighbor : adjList[node])
            if(!visited[neighbor])
                DFS(neighbor,visited,adjList);
    }
    void BFS(int source,vector<bool>& visited,vector<vector<int>>& adjList)
    {
        queue<int>q;
        q.push(source);

        visited[source] = true;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();

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
    int findAnimalsOfAllFarms(int n, vector<vector<int>>& relations) {
        vector<vector<int>> adjList(n);

        for(auto edge : relations)
        {
            int u = edge[0];
            int v = edge[1];

            // two sided love
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        int count=0;
        vector<bool>visited(n,0);

        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                count++;
                BFS(i,visited,adjList);
                // DFS(i,visited,adjList);
            }
        }
        return count;
    }
};


/*

    Alice owns an island. The island consists of different farms situated in different different places.
    There are 'n' animals in total, Each farm consists of some number of animals. You are given a 2D integer array 'relations'
    where relations[i] = {u, v} represents 'animal u' have a love relation with 'animal v', this love relation is two-sided.
    Alice know the total number of animals on the island but she does not know how much animals are there in each farm,
    and how much farms in there in total. 
    Help her find out the number of animals in each farm of the island. 
    
    Example:
            n = 6;
            relations[] = {{0, 1}, {2, 1}, {5, 4}} 
            Output: 3
*/
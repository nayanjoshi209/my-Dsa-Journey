#include <bits/stdc++.h>
using namespace std;

class Solution {
    void DFS(int node,vector<bool>& infected,vector<vector<int>>& adjList)
    {
        infected[node] = true;

        for(auto neighbor : adjList[node])
            if(!infected[neighbor])
                DFS(neighbor,infected,adjList);
    }
public:
    vector<int> findSafeCities(int n, vector<bool>& infected, vector<vector<int>>& canInfect) {
        vector<int>safeCity;
        vector<vector<int>> adjList(n);
        vector<int>newEffected;

        for(auto edge : canInfect)
        {
            int u = edge[0];
            int v = edge[1];

            newEffected.push_back(v);
            adjList[u].push_back(v);
        }

        for(int i=0;i<newEffected.size();i++)
            if(!infected[newEffected[i]])
                DFS(newEffected[i],infected,adjList);
        

        for(int i=0;i<infected.size();i++)
            if(infected[i] == 0)
                safeCity.push_back(i);

        return safeCity;
    }
};

/*

    Mike lives somewhere in Japan. He is watching news on television, 
    The reporter alerts about zombie apocalypse. There are total of n cities in the country,
    The reporter mentions the cities from which the apocalypse has started, so for that 
    you are given an integer array 'infected' in which infected[i] is true if the ith city is infected by zombies.
    You are also given a 2D integer array 'canInfect', in which canInfect[i] = {u, v} represents 
    'city u' could infect 'city v' with zombies. Now Mike wants to find the cities which are the safest so that he 
    could travel to them and live without fear. So which cities he could travel to?

    Example:
            n = 5
            infected[] = {true, false, true, false, false}
            canInfect[] = {{0, 1}}
            
            Output: 3, 4
*/
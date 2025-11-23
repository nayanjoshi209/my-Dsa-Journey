#include <bits/stdc++.h>
using namespace std;

class Solution {
    void BFS(int node,vector<bool>& infected,vector<vector<int>>& roads)
    {
        queue<int>q;
        q.push(node);
        infected[node] = true;

        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            
            for(auto neighbor : roads[node])
                if(!infected[neighbor])
                {
                    infected[neighbor] = true;
                    q.push(neighbor);
                }
        }
    }

    void DFS(int node,vector<bool>& infected,vector<vector<int>>& roads)
    {
        infected[node] = true;

        for(auto neighbor : roads[node])
            if(!infected[neighbor])
                DFS(neighbor,infected,roads);
    }
public:
    vector<int> findSafeCities(int n, vector<bool>& infected, vector<vector<int>>& roads) {
        vector<int>safeCity;

        for(int i=0;i<infected.size();i++)
            if(infected[i] == true)
                BFS(infected[i],infected,roads);

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
    You are also given a 2D integer array hasRoad[] where hasRoad[i] represents the list of cities to which the city i has road to.
    It's possible that the city i could have a road to reach itself.
    Now Mike wants to find the cities which are the safest so that he could travel to them and live without fear.
    So which cities he could travel to?

    Example:
            n = 7
            infected[] = {true, false, false, false, false, false, false}
            hasRoad[] = {{0, 1, 3}, {}, {}, {4}, {}, {}, {}}
            
            Output: 2, 5, 6
*/
/*
You are given a positive integer n representing n cities numbered from 1 to n. You are also given a 2D array roads where roads[i] = [ai, bi, distancei] indicates that there is a bidirectional road between cities ai and bi with a distance equal to distancei. The cities graph is not necessarily connected.

The score of a path between two cities is defined as the minimum distance of a road in this path.

Return the minimum possible score of a path between cities 1 and n.

Note:

A path is a sequence of roads between two cities.
It is allowed for a path to contain the same road multiple times, and you can visit cities 1 and n multiple times along the path.
The test cases are generated such that there is at least one path between 1 and n.


Example 1:
Input: n = 4, roads = [[1,2,9],
                       [2,3,6],
                       [2,4,5],
                       [1,4,7]]
Output: 5
Explanation: The path from city 1 to 4 with the minimum score is: 1 -> 2 -> 4. The score of this path is min(9,5) = 5.
It can be shown that no other path has less score.

Example 2:
Input: n = 4, roads = [[1,2,2],[1,3,4],[3,4,7]]
Output: 2
Explanation: The path from city 1 to 4 with the minimum score is: 1 -> 2 -> 1 -> 3 -> 4. The score of this path is min(2,2,4,7) = 2.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int mini = INT_MAX;
    vector<int> visited;
    void dfs(int v, int size, vector<vector<int>> &adjMatrix, vector<int> &visited, int &mini)
    {
        visited[v] = 1;
        for (int i = 1; i <= size; i++)
            if (adjMatrix[v][i] != 0 && visited[i] == 0)
            {
                mini = min(mini, adjMatrix[v][i]);
                visited[i] = 1;
                dfs(i, size, adjMatrix, visited, mini);
            }
        return;
    }

public:
    int minScore(int n, vector<vector<int>> &roads)
    {
        vector<vector<int>> adjMatrix((n + 1), vector<int>(n + 1, 0));
        for (int i = 0; i < roads.size(); i++)
        {
            adjMatrix[roads[i][0]].at(roads[i][1]) = roads[i][2];
            adjMatrix[roads[i][1]].at(roads[i][0]) = roads[i][2];
        }
        visited = vector<int>(n + 1, 0);
        for (int i = 1; i <= n; i++)
            dfs(i, n, adjMatrix, visited, mini);

        return mini;
    }
};

int main()
{
    vector<vector<int>> roads = {{4, 5, 7468}, {6, 2, 7173}, {6, 3, 8365}, {2, 3, 7674}, {5, 6, 7852}, {1, 2, 8547}, {2, 4, 1885}, {2, 5, 5192}, {1, 3, 4065}, {1, 4, 7357}};
    int n = 6;
    Solution soln;
    cout << soln.minScore(n, roads);
}
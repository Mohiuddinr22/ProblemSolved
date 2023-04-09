/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Example 1:

Input: numRows = 5
Output: [[1],
        [1,1],
       [1,2,1],
      [1,3,3,1],
     [1,4,6,4,1]]

Example 2:

Input: numRows = 1
Output: [[1]]
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> pasTri(numRows);
    for (int i = 0; i < numRows; i++)
    {
        pasTri[i] = vector<int>(i, 1);
        pasTri[i].push_back(1);
        for (int j = 1; j < i; j++)
            pasTri[i][j] = pasTri[i - 1][j - 1] + pasTri[i - 1][j];
    }
    return pasTri;
}
}

int main() {}
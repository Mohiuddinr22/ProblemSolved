/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    int maxStrSize = strs[0], size = strs.size();
    for (int i = 1; i < size; i++)
    {
        int j = 0;
        while (j < strs[i].length() && strs[0][j] == strs[i][j])
            j++;
        maxStrSize = min(maxSize, j);
    }
    str = strs[0].substr(0, maxStrSize);
}

int main()
{
}
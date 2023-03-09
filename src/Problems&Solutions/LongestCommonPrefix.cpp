/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void sortByLength(vector<string> &strs)
{
    int n = strs.size();
    for (int i = 1; i < n; i++)
    {
        string temp = strs[i];
        int j = i - 1;
        while (j >= 0 && temp.length() < strs[j].length())
        {
            strs[j + 1] = strs[j];
            j--;
        }
        strs[j + 1] = temp;
    }
}

string longestCommonPrefix(vector<string> &strs)
{
    sortByLength(strs);
    string str;
    int maxStrSize = strs[0], size = strs.size();
    for (int i = 0; i < size; i++)
        sort(strs[i].begin(), strs[i].end());
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
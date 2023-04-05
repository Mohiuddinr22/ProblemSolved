/*
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Example 2:

Input: strs = [""]
Output: [[""]]

Example 3:

Input: strs = ["a"]
Output: [["a"]]
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
// private:
//     void eraseWord(vector<string> &strs, string str)
//     {
//         auto it = find(strs.begin(), strs.end(), str);
//         if (it != strs.end())
//             strs.erase(it);
//     }
//     bool isAnagram(string s, string t)
//     {
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
//         if (s == t)
//             return true;
//         else
//             return false;
//     }

public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> map;
        for (auto str : strs)
        {
            string s = str;
            sort(s.begin(), s.end());
            map[s].push_back(str);
        }
        vector<vector<string>> answer;
        for (auto str : map)
        {
            answer.push_back(str.second);
        }
        return answer;
    }
    // vector<vector<string>> groupAnagrams(vector<string> &strs)
    // {
    //     vector<vector<string>> ans;
    //     int i = 0;
    //     while (i < strs.size())
    //     {
    //         vector<string> str;
    //         string s = strs[i];
    //         str.push_back(strs[i]);
    //         //eraseWord(strs, strs[i]);
    //         int k = 0;
    //         while (k < strs.size())
    //         {
    //             if (i != k && isAnagram(s, strs[k]))
    //             {
    //                 str.push_back(strs[k]);
    //                 eraseWord(strs, strs[k]);
    //             }
    //             k++;
    //         }
    //         i++;
    //         ans.push_back(str);
    //     }
    //     return ans;
    // }
};
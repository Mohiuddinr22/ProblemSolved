/*
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]

Example 2:

Input: nums = [1], k = 1
Output: [1]
*/

#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second > b.second;
}

vector<int> topKFrequent(vector<int> &nums, int k)
{
    vector<int> ans;
    unordered_map<int, int> occ;
    for (int i : nums)
        occ[i]++;
    vector<pair<int, int>> arr(occ.begin(), occ.end());
    sort(arr.begin(), arr.end(), compare);
    for (int i=0; i<k; i++)
        ans.push_back(arr[i].first);
    return ans;
}
int main() {}
/*
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
*/

#include <bits/stdc++.h>
using namespace std;

int maxVal(vector<int> &nums)
{
    int max = INT_MIN;
    for (int i : nums)
        if (i > max)
            max = i;
    return max;
}

int longestConsecutive(vector<int> &nums)
{
    int count = 1, n = nums.size();
    if (n == 0)
        return 0;
    sort(nums.begin(), nums.end());
    int i = 0;
    while (i < nums.size() - 1)
    {
        if (nums[i] == nums[i + 1])
            nums.erase(nums.begin() + i);
        else
            i++;
    }
    vector<int> score;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1] + 1)
            count++;
        else if (nums[i] != nums[i - 1] + 1)
        {
            score.push_back(count);
            count = 1;
        }
    }
    score.push_back(count);
    return maxVal(score);
}
/*
0,3,7,2,5,8,4,6,0,1
0,0,1,2,3,4,5,6,7,8
1,1,2,3,4,5,6,7,8,9
*/

int main()
{
    vector<int> arr = {4, 0, -4, -2, 2, 5, 2, 0, -8, -8, -8, -8, -1, 7, 4, 5, 5, -4, 6, 6, -3};
    cout << longestConsecutive(arr);
}
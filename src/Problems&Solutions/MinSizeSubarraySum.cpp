/*
Given an array of positive integers nums and a positive integer target, return the minimal length of a
subarray
 whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

 Example 1:

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.

Example 2:

Input: target = 4, nums = [1,4,4]
Output: 1

Example 3:

Input: target = 11, nums = [1,1,1,1,1,1,1,1]
Output: 0
*/

#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int> &nums)
{
    int sum = 0, count = 0, minLength = INT_MAX;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        while (sum >= target)
        {
            minLength = min(minLength, i + 1 - count);
            sum -= nums[count++];
        }
    }
    return minLength == INT_MAX ? 0 : minLength;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 15};
    cout << minSubArrayLen(15, arr);
}
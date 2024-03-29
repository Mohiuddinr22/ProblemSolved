/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/

#include <bits/stdc++.h>
using namespace std;

// vector<int> productExceptSelf(vector<int> &nums)
// {
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int start = 1, end = 1, j = 0, k = nums.size() - 1;
//         while (start < nums[i])
//             start *= nums[j++];
//         while (end > nums[i])
//             end *= nums[k--];
//         nums[i] = start * end;
//     }
//     return nums;
// }

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size(), prefix = 1, postfix = 1;
    vector<int> res(n, 1);
    for (int i = 0; i < n; i++)
    {
        res[i] = prefix;
        prefix *= nums[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        res[i] *= postfix;
        postfix *= nums[i];
    }
    return res;
}

// vector<int> productExceptSelf(vector<int> &nums)
// {
//     vector<int> ans;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int product = 0;
//         for (int j = 0; j < nums.size(); j++)
//         {
//             if (i != j)
//                 product *= nums[j];
//         }
//         ans.push_back(product);
//     }
//     return ans;
// }

int main() {}
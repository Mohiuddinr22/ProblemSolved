/*
Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.
*/

#include <bits/stdc++.h>
using namespace std;

int findGreatest(vector<int> &nums)
{
    int greatest = nums[0];
    for (size_t i = 1; i < nums.size(); i++)
    {
        if (nums[i] > greatest)
            greatest = nums[i];
    }
    return greatest;
}

int findSmallest(vector<int> &nums)
{
    int smallest = nums[0];
    for (size_t i = 1; i < nums.size(); i++)
    {
        if (nums[i] < smallest)
            smallest = nums[i];
    }
    return smallest;
}

int findGCD(vector<int> &nums)
{
    if (nums.empty())
        return 0;
    if (nums.size() == 1)
        return nums[0];
    int grt = findGreatest(nums), sml = findSmallest(nums);
    if (grt == sml)
        return grt;
    if (grt % sml == 0)
        return sml;
    else
    {
        int i = sml;
        int ans = 0;
        while (i >= 1)
        {
            if (grt % i == 0 && sml % i == 0)
                ans = max(ans, i);
            i--;
        }
        return ans;
    }
    return 0;
}

int main()
{
    vector<int> arr = {660, 66, 87, 467, 74};
    cout << findGCD(arr);
}
/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
*/

#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &nums) // using sort method
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return nums[i];
    }
    return -1;
}

int findDuplicate2(vector<int> &nums) // using binary search method
{
    int low = 1, high = nums.size() - 1;
    while (low < high)
    {
        int count = 0, mid = (high + low) / 2;
        for (int i : nums)
            if (i <= mid)
                count++;
        if (count <= mid)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int findDuplicate3(vector<int> &nums) // using floyd's cycle detection method
{
    int fast = nums[0], slow = nums[0];
    while (fast != slow)
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }
    fast = nums[0];
    while (fast != slow)
    {
        fast = nums[fast];
        slow = nums[slow];
    }
    return slow;
}

int findDuplicate4(vector<int> &nums) // index marking
{
    for (int i = 0; i < nums.size(); i++)
    {
        int index = nums[i] - 1;
        index = index *= -1;

        if (index > 0)
            return nums[i];
    }
    return -1;
}

int main() {}
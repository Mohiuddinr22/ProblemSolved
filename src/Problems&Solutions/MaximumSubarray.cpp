// Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
private:
    bool allIsNegative(vector<int> &nums)
    {
        bool x = true;
        for (auto i : nums)
        {
            if (i > 0)
                x = false;
        }
        return x;
    }

public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0, subMax = INT32_MIN, size = nums.size();
        if (size == 1)
            return nums.at(0);

        for (int i = 0; i < size; i++)
        {
            sum = max(sum + nums.at(i), nums.at(i));
            subMax = max(sum, subMax);
        }
        return subMax;
    }
};

int main()
{
    vector<int> array = {-2, -1};
    Solution s = Solution();
    cout << s.maxSubArray(array);
}
/*Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.



Example 1:

Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.

--------------------------------------------------------------------------------------

Example 2:

Input: nums = [0]
Output: [0]

--------------------------------------------------------------------------------------*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    bool isOdd(int num)
    {
        if (num % 2 != 0)
            return true;

        return false;
    }

public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int i = 0, size = nums.size(), pvtIdx = i;
        while (i < size)
        {
            if (isOdd(nums.at(pvtIdx)) && !isOdd(nums.at(i)))
            {
                swap(nums.at(i), nums.at(pvtIdx));
            }
            if (!isOdd(nums.at(pvtIdx)))
                pvtIdx++;
            i++;
        }
        return nums;
    }
};

int main()
{
    vector<int> nums = {5, 7, 8, 9, 11, 12, 8, 9, 1, 1, 2, 8, 2, 7, 2, 6, 63, 345, 3456, 753, 54, 234, 634, 54, 213, 123};
    Solution s = Solution();
    s.sortArrayByParity(nums);
    for (int i : nums)
    {
        cout << i << "\t";
    }
    cout << endl;
}
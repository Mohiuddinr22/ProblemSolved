/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.
*/

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 0, j, k, size = nums.size(), count = 0;
    if (size == 1)
        return size;
    if (size <= 0)
        return 0;

    while (i < size - 1)
    {
        k = i;
        while (k < size - 1 && nums[k] == nums[k + 1])
        {
            k++;
            count++;
        }
        if (count >= 1)
        {
            j = i + 1;
            while (j < size - count)
            {
                nums[j] = nums[j + count];
                j++;
            }
            size -= count;
        }
        i++;
        count = 0;
    }
    return size;
}

int main()
{
    vector<int> nums = {0, 1, 1, 1, 2, 2, 3, 3, 3, 4, 4};
    cout << removeDuplicates(nums);
}

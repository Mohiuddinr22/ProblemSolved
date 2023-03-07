/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
*/

#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int i = 0, j, size = nums.size();
    if (size == 1 && nums[0] != val)
        return 1;
    if (size == 1 && nums[0] == val)
        return 0;
    while (i < size)
    {
        if (nums[i] == val)
        {
            j = i;
            while (j < size - 1)
            {
                nums[j] = nums[j + 1];
                j++;
            }
            size--;
        }
        if (nums[i] != val)
            i++;
    }
    for (int i = 0; i < size; i++)
        cout << nums[i] << "\t";

    cout << endl;
    return size;
}

int main()
{
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    cout << removeElement(nums, 2);
}
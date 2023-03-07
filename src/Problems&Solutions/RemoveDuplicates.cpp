#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 0, j, k, size = nums.size(), count = 0;
    if (size == 1)
        return size;
    if (size == 0)
        return 0;

    while (i < size-1)
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
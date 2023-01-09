#include <iostream>
#include <vector>
using namespace std;

void twoSum(vector<int> &nums, int target)
{
    cout << "Array: ";
    for (unsigned int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    cout << "Target: " << target;
    cout << endl;
    for (unsigned int i = 0; i < nums.size(); i++)
    {
        for (unsigned int j = 0; j < nums.size(); j++)
        {
            if (nums[i] != nums[j] && nums[i] + nums[j] == target && i < j)
            {
                cout << "Indices are: [" << i << ", " << j << "]";
                cout << endl;
            }
        }
    }
}

int main()
{
    int target, size, element;
    cout << "Enter the size of your array: ";
    cin >> size;
    vector<int> arr;
    cout << "Enter the elements: ";
    for (unsigned int i = 0; i < size; i++)
    {
        cin >> element;
        arr.push_back(element);
    }
    cout << "Enter a target: ";
    cin >> target;
    twoSum(arr, target);

    return 0;
}

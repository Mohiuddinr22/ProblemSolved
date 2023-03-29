/*
Given an integer array arr, return the length of a maximum size turbulent subarray of arr.

A subarray is turbulent if the comparison sign flips between each adjacent pair of elements in the subarray.

More formally, a subarray [arr[i], arr[i + 1], ..., arr[j]] of arr is said to be turbulent if and only if:

For i <= k < j:
arr[k] > arr[k + 1] when k is odd, and
arr[k] < arr[k + 1] when k is even.
Or, for i <= k < j:
arr[k] > arr[k + 1] when k is even, and
arr[k] < arr[k + 1] when k is odd.


Example 1:
Input: arr = [9,4,2,10,7,8,8,1,9]
Output: 5
Explanation: arr[1] > arr[2] < arr[3] > arr[4] < arr[5]

Example 2:
Input: arr = [4,8,12,16]
Output: 2

Example 3:
Input: arr = [100]
Output: 1
*/

#include <bits/stdc++.h>
using namespace std;

int maxTurbulenceSize(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
        return 1;
    for()
}

// class Solution
// {
// private:
//     bool isEven(int num)
//     {
//         if (num != 0)
//             return num % 2 == 0;
//         return false;
//     }

// public:
//     int maxTurbulenceSize(vector<int> &arr)
//     {
//         if (arr.size() == 1)
//             return 1;
//         int k = 0, j = arr.size() - 1, turb1 = 0, turb2 = 0;
//         while (k < j)
//         {
//             if (arr[k] > arr[k + 1] && !isEven(k))
//                 turb1++;
//             if (arr[k] < arr[k + 1] && isEven(k))
//                 turb1++;
//             k++;
//         }
//         k = 0;
//         while (k < j)
//         {
//             if (arr[k] < arr[k + 1] && !isEven(k))
//                 turb2++;
//             if (arr[k] > arr[k + 1] && isEven(k))
//                 turb2++;
//             k++;
//         }
//         return max(turb1, turb2);
//     }
// };

/*
class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) {
            return 1;
        }
        int max_len = 1, cur_len = 1, prev_sign = 0;
        for (int i = 1; i < n; i++) {
            int cur_sign = (arr[i] > arr[i-1]) ? 1 : ((arr[i] < arr[i-1]) ? -1 : 0);
            if (cur_sign == 0) {
                cur_len = 1;
            } else if (cur_sign == -prev_sign) {
                cur_len++;
            } else {
                cur_len = 2;
            }
            max_len = max(max_len, cur_len);
            prev_sign = cur_sign;
        }
        return max_len;
    }
};
*/

int main()
{
}
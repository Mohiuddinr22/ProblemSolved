#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> sumArr;
    double median;
    for (int i : nums1)
        sumArr.push_back(i);
    for (int i : nums2)
        sumArr.push_back(i);
    sort(sumArr.begin(), sumArr.end());
    int size = sumArr.size(), index = size - 1;
    if (size % 2 == 0)
        median = (double)(sumArr[index / 2] + sumArr[index / 2 + 1]) / 2;

    if (size % 2 != 0)
        median = (double)(sumArr[index / 2]);

    return median;
}
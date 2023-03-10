/*
The array-form of an integer num is an array representing its digits in left to right order.

For example, for num = 1321, the array form is [1,3,2,1].
Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> addToArrayForm(vector<int> &num, int k)
{
    vector<int> ansArr;
    int carry = k, i = num.size() - 1;
    while (i >= 0 || carry > 0)
    {
        if (i >= 0)
        {
            carry += num[i];
        }
        ansArr.push_back(carry % 10);
        carry /= 10;
        i--
    }
    reverse(ansArr.begin(), ansArr.end());
    return ansArr;
}
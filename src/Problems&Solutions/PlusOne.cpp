/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int size = digits.size();
    for (int i = size - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }
        else
            digits[i] = 0;
    }
    vector<int> ansArr(size + 1);
    ansArr[0] = 1;
    return ansArr;
}

int main()
{
    vector<int> num = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> newNum = plusOne(num);
    for (auto i : newNum)
        cout << i << "\t";
}
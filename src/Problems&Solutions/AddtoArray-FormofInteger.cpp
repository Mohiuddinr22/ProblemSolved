/*
The array-form of an integer num is an array representing its digits in left to right order.

For example, for num = 1321, the array form is [1,3,2,1].
Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> addToArrayForm(vector<int>& num, int k) {
    long sum = 0, mult = 1, size = num.size();
    for (int i = size - 1; i >= 0; i--) {
        sum += num[i] * mult;
        mult *= 10;
    }
    sum += k;
    vector<int> ansArr;
    while (sum != 0) {
        ansArr.push_back(sum % 10);
        sum /= 10;
    }
    reverse(ansArr.begin(), ansArr.end());
    return ansArr;
}
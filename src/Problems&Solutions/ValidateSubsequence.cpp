/*
Given two non-empty arrays of integers, write a function that determines whether the second array is a subsequence of the first one.

A subsequence of an array is a set of numbers that aren't necessarily adjacent in the array but that are in the same order as they appear in the array. For instance, the numbers [1,2,4] from a subsequence of the array
[1,2,3,4] and so do the numbers [2,4]. Note that a single number in an array and the array itself are both valid subsequence of the array.
*/

#include <bits/stdc++.h>
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence)
{
    int i = 0, j = 0, arrSize = array.size();
    while (i < arrSize && j < sequence.size())
    {
        if (array[i] == sequence[j])
            j++;

        i++;
    }
    if (j == sequence.size())
        return true;

    return false;
}

int main() {}
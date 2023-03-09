/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
*/

#include <bits/htdc++.h>
using namespace std;

bool isSubsequence(string s, string t)
{
    int i = 0, j = 0, sizeS = s.length(), sizeT = t.length();
    while (i < sizeT && j < sizeS)
    {
        if (t[i] == s[j])
            j++;

        i++;
    }
    if (j == sizeS)
        return true;

    return false;
}

int main() {}
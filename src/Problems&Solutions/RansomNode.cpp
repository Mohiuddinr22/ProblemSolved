/*
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.
*/

#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
    unordered_map<char, int> map;

    for (char c : magazine)
        map[c]++;

    for (char c : ransomNote)
    {
        if (map[c] == 0)
            return true;
        map[c]--;
    }
    return false;
}
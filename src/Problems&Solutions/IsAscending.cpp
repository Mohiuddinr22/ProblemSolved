/*
A sentence is a list of tokens separated by a single space with no leading or trailing spaces. Every token is either a positive number consisting of digits 0-9 with no leading zeros, or a word consisting of lowercase English letters.

For example, "a puppy has 2 eyes 4 legs" is a sentence with seven tokens: "2" and "4" are numbers and the other tokens such as "puppy" are words.
Given a string s representing a sentence, you need to check if all the numbers in s are strictly increasing from left to right (i.e., other than the last number, each number is strictly smaller than the number on its right in s).

Return true if so, or false otherwise.
*/

#include <bits/stdc++.h>
using namespace std;

int convertToInt(string s)
{
    int num = 0, size = s.length(), i, mult = 1;
    for (i = size - 1; i >= 0; i--)
    {
        num += (s[i] - '0') * mult;
        mult *= 10;
    }
    return num;
}

bool areNumbersAscending(string s)
{
    int check = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int count = 0;
        if (!isdigit(s[i]))
            continue;
        if (isdigit(s[i]))
        {
            int j = i;
            while (isdigit(s[i]))
            {
                count++;
                i++;
            }
            int num += convertToInt(s.substr(j, count));
            if (check > num)
                return false;
            else
                continue;

            check = num;
        }
    }
    return true;
}

int main()
{
}
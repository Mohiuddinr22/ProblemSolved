/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.
*/
#include <iostream>
#include <map>
#include <vector>
using namespace std;

void roman_To_Numbers(vector<char> &R)
{
    map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    int int_Num = 0;

    for (int i = 0; i < R.size() - 1; ++i)
    {
        if (roman[R[i]] < roman[R[i + 1]])
        {
            int_Num -= roman[R[i]];
        }
        else
        {
            int_Num += roman[R[i]];
        }
    }
    int_Num += roman[R[R.size() - 1]];
    cout << int_Num;
}

/*void roman_To_Numbers(string s)
{
    map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    int int_Num = 0;

    for (int i = 0; i < s.length() - 1; ++i)
    {
        if (roman[s[i]] < roman[s[i + 1]])
        {
            int_Num -= roman[s[i]];
        }
        else
        {
            int_Num += roman[s[i]];
        }
    }
    int_Num += roman[s[s.length() - 1]];
    cout << int_Num;
}*/

int main()
{
    string roman;
    cout << "Enter a roman number : ";
    cin >> roman;

    vector<char> R(roman.begin(), roman.end());

    roman_To_Numbers(R);

    return 0;
}

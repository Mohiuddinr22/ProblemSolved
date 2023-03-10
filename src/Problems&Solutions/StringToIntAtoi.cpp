/*
Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).

The algorithm for myAtoi(string s) is as follows:

Read in and ignore any leading whitespace.
Check if the next character (if not already at the end of the string) is '-' or '+'. Read this character in if it is either. This determines if the final result is negative or positive respectively. Assume the result is positive if neither is present.
Read in next the characters until the next non-digit character or the end of the input is reached. The rest of the string is ignored.
Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no digits were read, then the integer is 0. Change the sign as necessary (from step 2).
If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then clamp the integer so that it remains in the range. Specifically, integers less than -231 should be clamped to -231, and integers greater than 231 - 1 should be clamped to 231 - 1.
Return the integer as the final result.

Note:

Only the space character ' ' is considered a whitespace character.
Do not ignore any characters other than the leading whitespace or the rest of the string after the digits.
*/

#include <bits/stdc++.h>
using namespace std;

/*int myAtoi(string s) // Personal solution
{
   int ans = 0, mult = 1, size = s.length();
   bool isNegative = false, leadingZero = true;
   string ansStr = "";
   for (int i = 0; i < size; i++)
   {
      if (s[i] == '-')
         isNegative = true;
      if (!isdigit(s[i]))
         continue;
      if (s[i] == '0' && leadingZero)
         continue;
      if (isdigit(s[i]) && s[i] != '0')
         leadingZero = false;
      if (isdigit(s[i]) && !leadingZero)
         ansStr += s[i];
   }
   for (int i = ansStr.length() - 1; i >= 0; i--)
   {
      if (ans > INT32_MAX)
         ans = INT32_MAX;
      ans += (ansStr[i] - '0') * mult;
      mult *= 10;
   }
   if (isNegative)
      ans *= (-1);

   return ans;
}*/

int myAtoi(string s) {
    int ans = 0, size = s.length();
    bool isNegative = false, start = false;
    for (int i = 0; i < size; i++) {
        if (s[i] == ' ' && !start) {
            continue;
        }
        if ((s[i] == '-' || s[i] == '+') && !start) {
            isNegative = (s[i] == '-');
            start = true;
            continue;
        }
        if (!isdigit(s[i]) && start) {
            break;
        }
        if (isdigit(s[i])) {
            start = true;
            int digit = s[i] - '0';
            if (ans > (INT_MAX - digit) / 10) {
                return isNegative ? INT_MIN : INT_MAX;
            }
            ans = ans * 10 + digit;
        }
        else {
            return 0;
        }
    }
    return isNegative ? -ans : ans;
  }

int main()
{
   string str = "a99";
   cout << myAtoiII(str);
}
/*
Given two binary strings a and b, return their sum as a binary string.
*/

#include <bits/stdc++.h>
using namespace std;

string reverseStr(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);

    return str;
}

string addBinary(string a, string b)
{
    int sum, carry = 0, i = a.length() - 1, j = b.length() - 1;
    string ans = "";
    while (i >= 0 || j >= 0)
    {
        sum = carry;
        if (i >= 0)
        {
            sum += ((int)a[i] - 48);
            i--;
        }
        if (j >= 0)
        {
            sum += ((int)b[j] - 48);
            j--;
        }
        carry = sum / 2;
        sum = sum % 2;
        ans += sum + 48;
    }
    if (carry == 1)
        ans += '1';

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
}
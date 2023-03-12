/*
Given an integer n, return true if n has exactly three positive divisors. Otherwise, return false.

An integer m is a divisor of n if there exists an integer k such that n = k * m.
*/

#include <bits/stdc++.h>
using namespace std;

bool isThree(int n)
{
    int divs = 0, i = n;
    while (i >= 1)
    {
        if (n % i == 0)
            divs++;
        i--;
    }
    if (divs == 3)
        return true;

    return false;
}
int main() { }
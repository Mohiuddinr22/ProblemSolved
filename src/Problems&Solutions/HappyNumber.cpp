/*
Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.
*/

#include <iostream>
#include <cmath>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += (n % 10) * (n % 10);
        n = n / 10;
    }
    return sum;
}

bool isHappy(int n)
{
    if (n == 1)
        return true;
    if (n <= 0)
        return false;
    while (n != 0)
    {
        n = sumOfDigits(n);
        if (n < 5 && n == 1)
            return true;
        else if (n < 5 && n * n != 1)
            return false;
    }
    return false;
}

int main()
{
    int num = 1111111;

    if (isHappy(num))
        cout << "happy" << endl;
    else
        cout << "not happy" << endl;
}
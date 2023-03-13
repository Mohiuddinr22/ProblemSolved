/*
Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.
*/

#include <bits/stdc++.h>
using namespace std;

int smallestEvenMultiple(int n)
{
    if (n % 2 == 0)
        return n;
    else
        return n * 2;
}
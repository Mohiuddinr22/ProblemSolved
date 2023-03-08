/*
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int minEatingSpeed(vector<int> &piles, int h)
{
    int n = piles.size();
    int left = 1, right = *max_element(piles.begin(), piles.end());
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        int hours = 0;
        for (int i = 0; i < n; i++)
        {
            hours += ceil(piles[i] / static_cast<double>(mid));
        }
        if (hours <= h)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}

int main()
{
    vector<int> piles = {3, 6, 7, 11};
    cout << minEatingSpeed(piles, 8);
}
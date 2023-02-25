/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool IfDescending(vector<int> &array)
{
    int size = array.size();
    int i = 0;
    while (i < size - 1)
    {
        if (array[i] < array[i + 1])
            return false;
        if (array[size - 1] > array[size - 2])
            return false;
        if (array[i] < array[i + 1])
            return false;
        i++;
    }
    return true;
}

int FindLargest(vector<int> &array, int start, int end)
{
    int largestNum = array[start];
    while (start < end)
    {
        if (array[start] > largestNum)
        {
            largestNum = array[start];
        }
        start++;
    }
    return largestNum;
}

int MaxProfit(vector<int> &prices)
{
    int size = prices.size();
    if (IfDescending(prices))
        return 0;
    vector<int> maxProfit;
    for (int i = 0; i < size; i++)
    {
        maxProfit.push_back(FindLargest(prices, i + 1, size) - prices[i]);
    }
    return FindLargest(maxProfit, 0, size - 1);
}

/*int MaxProfit(vector<int> &prices)
{
    int least = INT32_MAX, maxProfit = 0, profit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < least)
            least = prices[i];
        profit = prices[i] - least;
        if (maxProfit < profit)
            maxProfit = profit;
    }
    return maxProfit;
}*/

int main()
{
    vector<int> prices;
    prices.push_back(1);
    prices.push_back(2);

    cout << MaxProfit(prices);
    return 0;
}
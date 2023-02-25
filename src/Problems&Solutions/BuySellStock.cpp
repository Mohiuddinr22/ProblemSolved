/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/

#include <iostream>
#include <array>
using namespace std;

bool IfDescending(int *array, int size)
{
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

int FindLargest(int *array, int start, int end)
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

int MaxProfit(int *prices, int size)
{
    if (IfDescending(prices, size))
        return 0;
    int maxProfit[size];
    for (int i = 0; i < size; i++)
    {
        maxProfit[i] = FindLargest(prices, i + 1, size) - prices[i];
    }
    return FindLargest(maxProfit, 0, size - 1);
}

int main()
{
    int array[8] = {7, 1, 5, 3, 6, 4, 1, 6};
    cout << MaxProfit(array, 8);
}
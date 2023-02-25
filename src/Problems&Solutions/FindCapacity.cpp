/*A conveyor belt has packages that must be shipped from one port to another within [days] days.

The [i]th package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by [weights]). We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within [days] days*/

// 1 2 3 4 5 6 7 8 9 10

#include <iostream>
#include <cmath>
using namespace std;

int CountDays(int *array, int size, int cap)
{
    int index, days = 0, sum = 0;
    for (index = 0; index < size; index++)
    {
        sum += array[index];
        if (sum >= cap || (sum + array[index + 1]) > cap)
        {
            sum = 0;
            days++;
        }
    }
    return days;
}

int LargestElement(int *array, int size)
{
    int i, j, largestNum;
    bool x = true;
    for (i = 0; i < size; i++)
    {
        largestNum = array[i];
        for (j = 0; j < size; j++)
        {
            if (array[j] > largestNum)
                largestNum = array[j];
        }
    }
    return largestNum;
}

int FindCapacity(int *weights, int daysLimit, int size)
{
    int i, sum = 0, capacity, days;
    for (i = 0; i < size; i++)
    {
        sum += weights[i];
    }
    capacity = LargestElement(weights, size);
    while (days != daysLimit && capacity <= sum)
    {
        if (sum / daysLimit <= 2)
        {
            return capacity;
        }
        days = CountDays(weights, size, capacity++);
    }
    return capacity - 1;
}

int main()
{
    int weights[5] = {1, 2, 3, 1, 1}; // 8/4=2;3
    cout << FindCapacity(weights, 4, 5) << endl;
}
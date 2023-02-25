#include <iostream>
#include <cmath>
using namespace std;

int CountDays(int *array, int size, int cap)
{
    int index, days = 0, sum = 0;
    for (index = 0; index < size; index++)
    {
        sum += array[index];
        if (sum > cap)
        {
            sum = array[index];
            days++;
        }
    }
    return days + 1;
}

int FindCapacity(int *weights, int daysLimit, int size)
{
    int left = max(weights, weights + size);
    int right = 0;
    for (int i = 0; i < size; i++)
    {
        right += weights[i];
    }
    while (left < right)
    {
        int mid = (left + right) / 2;
        int days = CountDays(weights, size, mid);
        if (days > daysLimit)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return left;
}

int main()
{
    int weights[5] = {1, 2, 3, 1, 1};
    cout << FindCapacity(weights, 4, 5) << endl;
}
/*A conveyor belt has packages that must be shipped from one port to another within [days] days.

The [i]th package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by [weights]). We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within [days] days*/

// 1 2 3 4 5 6 7 8 9 10

#include <iostream>
using namespace std;

int CountDays(int *array, int size, int cap)
{
    int index, days = 0, sum = 0;
    for (index = 0; index < size; index++)
    {
        sum += array[index];
        if ((sum + array[index + 1]) > cap)
        {
            sum = 0;
            days++;
        }
    }
    return days;
}

int main()
{
    int size = 5;
    int array[size] = {1, 2, 3, 1, 1};
    int capacity = 3;
    cout << CountDays(array, size, capacity) << endl;
}
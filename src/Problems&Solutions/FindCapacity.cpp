/*A conveyor belt has packages that must be shipped from one port to another within [days] days.

The [i]th package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by [weights]). We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within [days] days*/

// 1 2 3 4 5 6 7 8 9 10

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    int findLargest(vector<int> &array)
    {
        int largestNum = array[0], size = array.size();
        for (int i = 1; i < size; i++)
        {
            if (array.at(i) > largestNum)
            {
                largestNum = array.at(i);
            }
        }
        return largestNum;
    }

    int countDays(vector<int> &weights, int capacity)
    {
        int i, size = weights.size(), sum = 0, days = 0;
        for (i = 0; i < size - 1; i++)
        {
            sum += weights.at(i);
            if (sum + weights[i + 1] > capacity)
            {
                sum = 0;
                days++;
            }
        }
        return days + 1;
    }

public:
    int shipWithinDays(vector<int> &weights, int days)
    {
        int i, size = weights.size(), sum = 0, capacity = findLargest(weights), day = 0;
        for (i = 0; i < size; i++)
        {
            sum += weights.at(i);
        }

        while (day != days && capacity <= sum)
        {
            int newCapacity = (capacity + sum) / 2;
            if (countDays(weights, newCapacity) <= days)
            {
                sum = newCapacity - 1;
            }
            else
            {
                capacity = newCapacity + 1;
            }
            day = countDays(weights, capacity);
        }
        return capacity;
    }
};

int main()
{
    vector<int> w1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> w2 = {3, 2, 2, 4, 1, 4};
    vector<int> w3 = {1, 2, 3, 1, 1};
    Solution s1 = Solution();
    cout << s1.shipWithinDays(w1, 5) << endl;
    cout << s1.shipWithinDays(w2, 3) << endl;
    cout << s1.shipWithinDays(w3, 4) << endl;
}
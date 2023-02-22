#include <iostream>
#include <cmath>
using namespace std;

/*You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.*/

void SelectionSort(int *array, int size)
{
    int i, j, k;
    for (i = 0; i < size - 1; i++)
    {
        k = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[k])
            {
                k = j;
            }
        }
        if (i != k)
            swap(array[i], array[k]);
    }
}

void DisplayArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl;
}
// 1  1  2 3   3   5 5 6 6
// 0  1  2 3   4   5 6 7 8
int FindSingleElement(int *array, int index, int size)
{
    if (array[0] != array[1])
        return array[0];

    if (array[size - 1] != array[size - 2])
        return array[size - 1];

    if (array[index] != array[index - 1] && array[index] != array[index + 1])
        return array[index];

    index++;
    FindSingleElement(array, index, size);
}

int FindSingleElement2(int *array, int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (array[i] != array[i + 1])
            return array[i];
    }
}

int main()
{
    int array[9] = {1, 2, 2, 5, 5, 6, 6, 7, 7};
    // SelectionSort(array, 9);
    DisplayArray(array, 9);
    cout << "The single element is : " << FindSingleElement2(array, 9) << endl;
}
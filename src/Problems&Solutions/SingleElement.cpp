#include <iostream>
#include <cmath>
using namespace std;

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

int main()
{
    int array[9] = {1, 1, 2, 2, 5, 6, 6, 7, 7};
    // SelectionSort(array, 9);
    DisplayArray(array, 9);
    cout << "The single element is : " << FindSingleElement(array, 1, 9) << endl;
}
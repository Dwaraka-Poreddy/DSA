/*
This program removes duplicates from a sorted array using a brute force approach.
1. It creates a temporary array to store unique elements.
2. It iterates through the original array and copies unique elements to the temporary array.
3. It fills the remaining positions in the temporary array with 0.
4. It copies the unique elements back to the original array.
*/

#include <iostream>

using namespace std;

void removeDuplicatesFromSortedArray(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return;
    }
    int temp[size];
    temp[0] = arr[0];
    int count = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            temp[count] = arr[i];
            count++;
        }
    }
    while (count < size)
    {
        temp[count] = 0;
        count++;
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    removeDuplicatesFromSortedArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// This program reverses an array using the two-pointer technique.
// It swaps elements from the beginning and end of the array, moving towards the center.

#include <iostream>

using namespace std;

void reverseArray(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return;
    }
    int start = 0;
    for (int i = size - 1; i > start; i--)
    {
        swap(arr[start], arr[i]);
        start++;
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
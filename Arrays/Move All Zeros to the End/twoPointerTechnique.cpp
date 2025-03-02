#include <iostream>

using namespace std;

// This problem is solved using the two-pointer technique.
// The 'left' pointer keeps track of the position to place the next non-zero element.
// The 'i' pointer traverses the array. When a non-zero element is found, it is swapped with the element at the 'left' pointer, and the 'left' pointer is incremented.
// This ensures that all non-zero elements are moved to the front, and zeros are moved to the end.

void moveZerosToEnd(int arr[], int size)
{
    int left = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[left]);
            left++;
        }
    }
}

int main()
{
    int arr[] = {1, 0, 2, 0, 3, 0, 4, 5, 6, 0, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    moveZerosToEnd(arr, size);
    cout << "Array after moving zeros: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
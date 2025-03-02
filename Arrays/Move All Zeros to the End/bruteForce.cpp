#include <iostream>

using namespace std;

// This function moves all zeros in the array to the end while maintaining the order of non-zero elements.

// It first creates a new array to store non-zero elements, then fills the remaining positions with zeros.
// Finally, it copies the new array back to the original array.

void moveZerosToEnd(int arr[], int size)
{
    int newArr[size];
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            newArr[count] = arr[i];
            count++;
        }
    }
    while (count < size)
    {
        newArr[count] = 0;
        count++;
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = newArr[i];
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

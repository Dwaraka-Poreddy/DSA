#include <iostream>

using namespace std;

bool isSortedInDescendingOrder(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int arr[] = {10, 8, 6, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    if (isSortedInDescendingOrder(arr, size))
    {
        cout << "The array is sorted in descending order.";
    }
    else
    {
        cout << "The array is not sorted in descending order.";
    }
    return 0;
}
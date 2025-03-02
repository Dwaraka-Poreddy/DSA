#include <iostream>

using namespace std;

void reverseArray(int arr[], int size)
{
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[size - i - 1];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
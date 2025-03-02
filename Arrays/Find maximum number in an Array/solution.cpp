#include <iostream>

using namespace std;

int findMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {1, 12, 3, 54, 5, 430, 23, 12, 45, 67, 89, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findMax(arr, size) << endl;
    return 0;
}
// This function removes duplicates from a sorted array using the two-pointer technique.
// The 'slow' pointer keeps track of the position of the last unique element found,
// while the 'fast' pointer traverses the array to find new unique elements.
// After processing, the remaining elements in the array are set to -1.

#include <iostream>
#include <vector>

using namespace std;

void removeDuplicatesFromSortedArray(vector<int> &arr)
{
    if (arr.size() == 0 || arr.size() == 1)
    {
        return;
    }
    int slow = 0;

    for (int fast = 1; fast < arr.size(); fast++)
    {
        if (arr[fast] != arr[slow])
        {
            slow++;
            arr[slow] = arr[fast];
        }
    }
    slow++;
    while (slow < arr.size())
    {
        arr[slow] = -1;
        slow++;
    }
    return;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5, 6, 8};
    removeDuplicatesFromSortedArray(arr);

    cout << "Modified array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
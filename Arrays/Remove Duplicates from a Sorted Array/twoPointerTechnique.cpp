#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &arr)
{
    if (arr.size() == 0 || arr.size() == 1)
    {
        return arr.size();
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
    return slow;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5, 6, 8};

    cout << "Modified array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
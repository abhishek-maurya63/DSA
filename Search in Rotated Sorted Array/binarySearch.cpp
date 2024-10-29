
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {4, 5, 6, 7, 8, 9, 0, 1, 2, 3};
    int st = 0, end = arr.size() - 1;
    int target = 9;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        // Check if mid element is the target
        if (arr[mid] == target)
        {
            cout << "Target found at index: " << mid << endl;
            return 0;
        }

        // Determine which part is sorted
        if (arr[st] <= arr[mid])
        {
            // Left half is sorted
            if (arr[st] <= target && target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            // Right half is sorted
            if (arr[mid] < target && target <= arr[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    // If the target is not found
    cout << "Target not found" << endl;
    return 0;
}

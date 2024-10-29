#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int BS(vector<int> &arr, int target, int st, int end)
{
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (target > arr[mid])
        {
            return BS(arr, target, mid + 1, end);
        }
        else if (target < arr[mid])
        {
            return BS(arr, target, st, mid - 1);
        }
        else if (target == arr[mid])
        {
            return arr[mid];
        }
        return -1;
    }
}

int main()
{
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int st = 0, end = arr.size() - 1;
    int ans = BS(arr, 10, st, end);
    if (ans != -1)
    {
        cout << "Answer Found!!" << "  " << ans << endl;
    }
    else
    {
        cout << "Answer Not Found" << endl;
    }

    return 0;
}
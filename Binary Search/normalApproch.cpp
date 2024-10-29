/* This approch is more optimal than recursive approch because in both case the time complexity is O(logn) but the space comlexity for recursive approch is O(logn) and for iterative approch the space complexity is constant O(1).*/

#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = arr.size();
    int target = 7;
    int st = 0, end = n - 1;
    int ans = -1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (target > arr[mid])
        {
            st = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target == arr[mid])
        {
            ans = arr[mid];
            break;
        }
    }
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
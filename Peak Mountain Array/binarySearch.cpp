#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
{
    int ans;
    int peakIndex;
    vector<int> arr = {0, 3, 8, 9, 5, 2};
    int st = 0, end = arr.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            st = mid + 1;
        }

        else if (arr[mid] < arr[mid - 1])
        {
            end = mid - 1;
        }
        else
        {
            ans = arr[mid];
        }
        peakIndex = mid;
    }
    cout << peakIndex << " " << ans;

    return 0;
}
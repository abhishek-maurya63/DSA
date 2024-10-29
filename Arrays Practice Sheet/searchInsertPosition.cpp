#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int searchInsert(vector<int> &nums, int target)
{
    int n = nums.size();
    int st = 0, end = n - 1;
    if (nums.empty())
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        int mid = st + (end - st) / 2;
        if (target < nums[mid])
        {
            end = mid - 1;
        }
        else if (target == nums[mid])
        {
            return mid;
        }
        else
            st = mid + 1;
    }
    return st;
}
int main()
{
    vector<int> arr = {2};
    int ans = searchInsert(arr, 1);
    cout << "Element is found at index or it is the expected loction of the element " << ans;
}
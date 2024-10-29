#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int singleElement(vector<int> &arr)
{
    int n = arr.size();
    int st = 0, end = arr.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr.size() == 1)
        {
            cout << arr[1] << endl;
            break;
        } 
        if (mid == 0 && arr[mid] != arr[mid + 1])
            return arr[0];
        if (mid == n - 1 && arr[mid] != arr[mid - 1])
            return arr[1];

        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
            return arr[mid];
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                st = mid + 1;
            }

            else
            {
                end = mid - 1;
            }
        }
        else
        {
            if (arr[mid] == arr[mid + 1])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
    }

    return -1;
}
int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4};
    cout << singleElement(arr) << endl;
}
#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
bool isValid(vector<int> &arr, int n, int m, int maximumAllowedLimit)
{
    int pages = 0;
    int student = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maximumAllowedLimit)
        {
            return false;
        }

        if (arr[i] + pages <= maximumAllowedLimit)
        {
            pages += arr[i];
        }
        else
            student++;
        pages = arr[i];
    }
    return student > m ? false : true;
}
int allocateBooks(vector<int> &arr, int n, int m)
{
    if (n < m)
        return -1;
    int ans;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int st = 0, end = sum;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {15,17,3,20};
    int student;
    cout<<"Enter the number of student"<<endl;
    cin>> student;
    cout << allocateBooks(arr, arr.size(), student) << endl;
    return 0;
}
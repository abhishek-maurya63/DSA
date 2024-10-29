#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n = 5, currSum;
    int maxSum = INT_MIN;
    int arr[n] = {1, 2, 3, 4, 5};
    for (int st = 0; st < n; st++)
    {
        currSum += arr[st];
        maxSum = max(currSum, arr[st]);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "The maximum sum of the subarray is " << maxSum;
}
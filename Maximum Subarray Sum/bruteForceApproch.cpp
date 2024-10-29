// Brute force approch to print the sum of maximum subarray

#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    int n = 5;
    int maxSum= INT_MIN;
    int arr[n] = {1, 2, 3, 4, 5};
    for (int st = 0; st < n; st++)
    {
        int sum = 0;
        for (int end = st; end < n; end++)
        {
            sum += arr[end];
            maxSum = max(sum,maxSum);
        }
    }
    cout << "The maximum sum of the subarray is " << maxSum;
}
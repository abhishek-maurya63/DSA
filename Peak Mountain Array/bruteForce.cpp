#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> arr = {2, 3, 4, 2, 6, 500, 43, 4, 343, 3, 4};

    int peak = INT_MIN;
    int peakIndex;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] > peak)
        {
            peak = arr[i];
            peakIndex = i;
        }
    }
    cout << "The peak point is " << peak << " at the index " << peakIndex;
    return 0;
}
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int main()
{
    int max = INT_MIN;
    int min = INT_MAX;
    vector<int> arr = {2, 4, 5, 3, 5, 4, 53, 35};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << "  " << max << endl;
    return 0;
}

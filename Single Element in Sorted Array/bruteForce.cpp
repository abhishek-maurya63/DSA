#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
{
    int count = 1;
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    for (int i = 1; i < arr.size() - 1; i++)
    {
        if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1])
        {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}
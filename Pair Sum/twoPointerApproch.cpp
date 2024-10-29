#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 4, target=9;
    int arr[4] = {2, 7, 11, 15};
    int i = 0, j = n - 1;
    int sum = 0;
    while (i < j)
    {
        sum = arr[i] + arr[j];
        if (sum > target)
        {
            j--;
        }
        else if (target > sum)
        {
            i++;
        }
        else
        {
            return (i, j);
        }
    }
    cout << i<< "  " << j;
    return 0;
}
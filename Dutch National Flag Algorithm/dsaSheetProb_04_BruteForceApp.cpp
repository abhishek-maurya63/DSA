#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &arr)
{
    int n = arr.size();
    int zeros = 0;
    int ones = 0;
    int twos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeros++;
        }
        else if (arr[i] == 1)
        {
            ones++;
        }
        else
        {
            twos++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (zeros != 0)
        {
            arr[i] = 0;
            zeros--;
        }
        else if (ones != 0)
        {
            arr[i] = 1;
            ones--;
        }
        else
        {
            arr[i] = 2;
            twos--;
        }
    }
}
int main()
{
    vector<int> arr = {0, 1, 2, 1, 0, 2, 0, 1, 2, 0, 1, 2, 0, 2, 1, 0, 2, 1, 0};
    sort(arr);
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

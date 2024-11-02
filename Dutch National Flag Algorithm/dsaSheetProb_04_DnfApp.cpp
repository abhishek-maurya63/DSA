#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &arr)
{
    int n = arr.size();
    int high = n - 1, low = 0, mid = 0;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
            
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
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
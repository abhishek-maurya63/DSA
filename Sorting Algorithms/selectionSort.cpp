#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestIndex])
            {
                smallestIndex = j;
            }
        }
        swap(arr[smallestIndex], arr[i]);
    }
}
int main()
{
    vector<int> arr = {8, 9, 12, 5, 6, 59, 6, 3, 5, 2, 1, 5};
    selectionSort(arr);
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
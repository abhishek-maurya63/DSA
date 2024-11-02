#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        bool isSort = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSort = true;
            }
        }
        if (!isSort)
        {
            return;
        }
    }
}
int main()
{

    vector<int> arr={8,9,12,5,6,59,6,3,5,2,1,5};
    bubbleSort(arr);
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
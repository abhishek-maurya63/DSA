#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // int n = 10;
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5, 5, 6, 7};
    vector<int> newArr;
    newArr.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
        {
            newArr.push_back(arr[i]);
        }
    }
    for (int i = 0; i < newArr.size(); i++)
    {
        cout << newArr[i] << endl;
    }
    return 0;
}
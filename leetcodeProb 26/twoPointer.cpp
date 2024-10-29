#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;

    int uniqueIndex = 0;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[uniqueIndex] != nums[i])
        {
            uniqueIndex++;
            nums[uniqueIndex] = nums[i];
        }
    }
    return uniqueIndex+1;
}
int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};

    int newLength = removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++)
    {
        cout << nums[i] << " ";
    }

    cout << "\nNew length: " << newLength << endl;

    return 0;
}
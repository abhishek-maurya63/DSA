#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxWater(vector<int> &height)
{
    int n = height.size();
    int maxWater = 0;
    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++)
    {
        int width = right - left;
        int minHeight = min(height[left], height[right]);
        int currWater = minHeight * width;
        maxWater = max(currWater, maxWater);

        height[left] < height[right] ? left++ : right--;
    }
    return maxWater;
}
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 8};
    cout << maxWater(height) << endl;
}
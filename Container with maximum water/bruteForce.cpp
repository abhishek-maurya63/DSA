#include <iostream>
#include <vector>
#include <algorithm>
// #include<limits.h>
using namespace std;
int maxArea(vector<int> &height)
{
    
    int minHeight = 0;
    int area;
    int finalArea = 0;
    for (int i = 0; i < height.size(); i++)
    {
        int diff = 1;
        for (int j = i + 1; j < height.size(); j++)
        {
            minHeight = min(height[i], height[j]);
            area = minHeight * diff;
            if (area > finalArea)
            {
                finalArea = area;
            }
            diff++;
        }
    }
    return finalArea;
}
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 8};
    cout << maxArea(height)<< endl;
}
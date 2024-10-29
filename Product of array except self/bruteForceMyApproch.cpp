//My approch and the mam's approch is same.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int product = 1;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i != j)
            {
                product *= nums[j];
            }
        }
        // Push the product after finishing the inner loop
        ans.push_back(product);
        // nums[i]=product; /*We can't write this operation because if we but the product in the same array that means in next iteration it will be the part of multiplication. which will lead to wrong answer.*/
    }
    return nums;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
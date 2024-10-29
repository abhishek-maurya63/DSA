// My approch and mam's approch is same but there is the another way to do this is through division operator which is as follows
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
    int ans = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        ans *= nums[i];
    }
    cout << ans << endl;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     ans = ans / nums[i];
    //     nums[i] = ans;
    // }
    // return nums;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    productExceptSelf(nums);
    // vector<int> ans = productExceptSelf(nums);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << endl;
    // }
    return 0;
}
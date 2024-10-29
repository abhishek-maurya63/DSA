// My approch

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n = 5, sum;
//     int arr[5] = {2, 7, 11, 15};
//     for (int st = 0; st < n; st++)
//     {
//         sum = 0;
//         for (int end = st + 1; end < n; end++)
//         {
//             sum = arr[st] + arr[end];
//             if (sum == 18)
//             {
//                 cout << "The pair is " << arr[st]<<arr[end];
//             }
//         }
//     }

// }

// mam's approch using vectors
#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans ;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans= pairSum(nums, target);
    cout << ans[0]<< ","<< ans[1];
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> elem = {1, 2, 2, 2, 1};
    sort(elem.begin(), elem.end());
    int n = elem.size();
    int freq = 0;
    int ans = elem[0];
    for (int i = 0; i <= n; i++)
    {
        if (ans == elem[i])

        {
            freq++;
        }
        else
        {
            freq = 0;
        }
        if (ans > n / 2)
        {
            cout << ans;
        }
    }
}
#include <iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
        int n= nums.size();
        for(int val:nums){
            int freq =0;
            for(int el:nums){
                if(val==el){
                    freq++;
                }
                if(freq>n/2){
                    return val;
                }
            }

        }
        return -1;
    }
int main()
{
    vector<int>elem = { 1,2,2,2,1};
    cout << majorityElement(elem);

}
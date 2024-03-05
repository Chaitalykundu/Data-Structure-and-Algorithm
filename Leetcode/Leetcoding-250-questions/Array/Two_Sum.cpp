/* Author : Chaitaly Kundu
   Date : 25-09-2021*/

#include<iostream>
using namespace std;


 vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> v;
    int n = nums.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((nums[i]+nums[j])==target)
            {
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main(){

    vector<int> nums = {2,7,11,15};
    int target = 9;
    cout << twoSum(nums, target);

    return 0;
}
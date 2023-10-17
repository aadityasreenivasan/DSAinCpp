#include<bits/stdc++.h>
using namespace std;
/*
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.
*/
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc=true;
        bool dec=true;

        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                dec=false;
            }
            else if(nums[i]<nums[i-1]){
                inc=false;
            }
            if(inc==false && dec==false){
                return false;
        }
        
        }
        return true;
    }
};
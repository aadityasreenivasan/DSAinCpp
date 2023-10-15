#include<bits/stdc++.h>
using namespace std;

/*
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                
                swap(nums[l], nums[i]);
                l++;
            }
        }
        return nums;
    }
};
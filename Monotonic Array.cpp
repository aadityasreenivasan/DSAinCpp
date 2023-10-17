#include<bits/stdc++.h>
using namespace std;

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
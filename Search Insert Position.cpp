#include<bits/stdc++.h>
using namespace std;

/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
*/
int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;

        while(l<=r)
        {
            int m= l+ (r-l)/2;
            if (nums[m]==target)
            return m;

            else if (nums[m]<target)
            {
                l=m+1;
            }
            else{
                r=m-1;
            }

        }
        return l;
}
    
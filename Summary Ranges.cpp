#include<bits/stdc++.h>
using namespace std;
/*
aaditya sreenivasan

You are given a sorted unique integer array nums.

A range [a,b] is the set of all integers from a to b (inclusive).

Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

Each range [a,b] in the list should be output as:

"a->b" if a != b
"a" if a == b
*/
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n =nums.size();
        if(n==0) return ans;
        int a=nums[0];

        for(int i=0; i<n; ++i)
        {
            if(i==n-1 || nums[i]+1 !=nums[i+1])
            {
                if(nums[i]!= a)
                ans.push_back(to_string(a)+"->"+to_string(nums[i]));

                else
                ans.push_back(to_string(a));

                if(i!=n-1)
                a=nums[i+1];

            }
        }
        return ans;
    }
};
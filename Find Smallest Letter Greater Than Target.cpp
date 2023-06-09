#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int begin=0;
        int end=letters.size()-1;

        if(letters[0]>target)
        return letters[0];

        else if(target>=letters[end])
        return letters[0];

        char res;

        while(begin<=end)
        {
            int mid=(begin+end)/2;

            if(letters[mid]>target){
                res=letters[mid];
                end=mid-1;
            }

            else
            begin=mid+1;
        }
        return res;
    }
};
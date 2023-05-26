#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //funtion which returns true or false according to the number if it is a perfect square
    bool isPerfectSquare(int num) {
        int count=0;
        for(long long int i=0; i*i<=num;i++){
            if(i*i==num){
                count++;
            }
        }
        if (count==1)
        return true;
        else
        return false;
    }
};
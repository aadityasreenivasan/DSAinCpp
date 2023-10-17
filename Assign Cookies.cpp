#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int satisfied=0;

        int a=g.size()-1;
        int b=s.size()-1;

        while(a>=0 && b>=0){
            if(s[b]>=g[a]){
                satisfied++;
                a--;
                b--;
            }else{
                a--;
            }
        }

        return satisfied;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]-'A' + 'a';
        }
        return s;
    }
};

int main()
{
    Solution s;
    string a= s.toLowerCase("HEY I AM AADITYA");
    cout<<a;
    return 0;
}
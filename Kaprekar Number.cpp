#include<bits/stdc++.h>
using namespace std;

bool isKaprekarNum(int n){
    if(n==1)
    return true;

    int sq=n*n, digcount=0;
    while(sq){
        digcount++;
        sq/=10;
    }
    sq=n*n;
    for(int i=1;i<digcount;i++){
        int parts=pow(10,i);
        if(parts==n)
        continue;

        int sum= sq/parts + sq%parts;
        if(sum==n)
        return true;
        
    }
    return false;
}
int main(){
    int n=25;
    string result = isKaprekarNum(n) ? "True" : "False";
    cout<<result<<endl;
    return 0;
}
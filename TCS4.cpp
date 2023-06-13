/*
Write a program to find smallest integer value b for a given value of a . If we multiply the digits of b, We should get exact value of a 
*/
#include <bits/stdc++.h>
using namespace std;

int helper(int A)
{
    stack<int> s;
    
    for(int i=9;i>=2;i--)
    {
        while(A%i==0)
        {
            s.push(i);
            A/=i;
        }
    }
    
    if(A!=1)
    {
        return -1;
    }
    
    int b=0;
    
    while(!s.empty())
    {
        int m=s.top();
        s.pop();
        b=b*10 + m;
    }
    return b;
}

int main(){
    int A;
    cout<<"enter a number";
    cin>>A;
    cout<<helper(A);
}
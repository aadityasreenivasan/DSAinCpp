#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter Number of nodes(marketers): ";
    int n;
    cin>>n;
    
    cout<<"Enter profit of subordinate at the end: ";
    int m;
    cin>>m;
    
    cout<<"Enter percentage to be passed to the supervisor: ";
    int p;
    cin>>p;
    
    int i=0;
    
    while(i<n-1)
    {
        m=(p*m)/100;
        i++;
    }
    
    cout<<m;
    
    return 0;
}
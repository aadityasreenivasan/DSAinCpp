#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    
    int arr[n][n];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    //transpose of input matrix
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    
    //reversing rows of the transpose array
    int start=0;
    int end=n-1;
    for(int i=0;i<n;i++)
    {
        swap(arr[i][start], arr[i][end]);
        start++;
        end--;
    }
    
    //printing output array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<"";
        }
        cout<<endl;
    }
    return 0;
    
}
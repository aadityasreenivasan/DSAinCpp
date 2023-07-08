#include<bits/stdc++.h>
using namespace std;

void ascdesc(vector<int> v)
{
    int n=v.size();
    int k=n/2;
    sort(v.begin(), v.begin()+k);
    sort(v.begin()+k, v.end(), greater<int>());
    
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }
}

int main()
{
    vector<int> v={1,2,3,4,5,6};
    
    ascdesc(v);
    
    return 0;
}

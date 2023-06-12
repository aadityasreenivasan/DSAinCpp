#include <bits/stdc++.h>
using namespace std;

void helper(int p1, int p2, int p3, int q, int e, int r)
{
    int second=e-r+q+q-p1-p2-p3;
    int x= second/3;
    int first= x+p1+p3-q;
    
    cout<<first<<endl;
    cout<<second;
}
int main()
{
    int p1,p2,p3,e,q,r;
    cin>>p1>>p2>>p3>>q>>e>>r;
    helper(p1,p2,p3,q,e,r);
    
    return 0;
}
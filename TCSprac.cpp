#include <bits/stdc++.h>
using namespace std;

/*
A coding competition was conducted in company with e employees.
Data of employees who participated and who did not participate in the competition is available.
There were three problems in the coding competition. Data as mentioned below is available
The number of employees who have solved only the first, only the second and only the third problem are equal.
p1 employees who solved the first ,second problem. p2 employees who solved the second, third problem. 
p3 employees who solved the third first problem. g employees who solved all the 3 problems. 
r employees who did not participate in competition.

*/

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
#include<bits/stdc++.h>
using namespace std;

/*
Before the outbreak of corona virus to the world, a meeting happened in a room in wuhan.
A person who attended that meeting had covid-19 and no one in the room knew it.
At the end of the meeting everyone started shaking hands with everyone else in the room. 
Given the fact that any two persons shake hands atleast once. 
Can you tell the total count of
handshakes happened there
*/

int Handshakes(int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=i;
    }

    return sum;
}

int main()
{
    int a;
    cout<<"enter number of people in the room: ";
    cin>>a;
    cout<<"Total count of handshakes is: "<<Handshakes(a);
    return 0;
}

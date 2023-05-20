#include<bits/stdc++.h>
using namespace std;

void Reverse_Queue_using_Stack (queue &q)
{
  stack<long long int> s;
  while (!q.empty ())
    {
      s.push (q.front ());
      q.pop ();
    }
  while (!s.empty ())
    {
      q.push (s.top ());
      s.pop ();
    }
    return;
}
void Show (queue &q)
{
  queue p=q;
  while(!p.empty())
  {
      int a = p.front();
      p.pop();
      cout << a << " ";
  }
}
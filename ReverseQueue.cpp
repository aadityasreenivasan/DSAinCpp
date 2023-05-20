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
int main ()
{
  queue q ;
  q.push (1);
  q.push (2);
  q.push (3);
  q.push (4);
  q.push (5);
  q.push (6);
  cout << "At first the queue is: ";
  Show (q);
  cout << endl;
  Reverse_Queue_using_Stack (q);
  cout << "After reversing the queue using stack, now to queue: ";
  Show (q);
}
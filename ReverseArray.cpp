#include <iostream>
using namespace std;

int main ()
{
  int arr[] = { 1, 2, 3, 4, 5 };
  int n = sizeof (arr) / sizeof (arr[0]);

  int start = 0;
  int end = n - 1;

  // swap elements at start and end until start >= end
  while (start < end)
    {
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;

      start++;
      end--;
    }

  // print the reversed array
  for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }

  return 0;
}
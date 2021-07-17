#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
}

void reverse_array(int arr[], int end)
{
  int start = 0;
  end = end - 1;
  while (start < end)
  {
    int temp = arr[end];
    arr[end] = arr[start];
    arr[start] = temp;
    ++start;
    --end;
  }
}

void reverseArray(int arr[], int start, int end)
{
  if (start >= end)
    return;

  int temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;

  // Recursive Function calling
  reverseArray(arr, start + 1, end - 1);
}

int main()
{
  int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
  int length = sizeof(arr) / sizeof(arr[0]);
  printarray(arr, length);
  reverse_array(arr, length);

  cout << endl;
  printarray(arr, length);

  cout << endl;

  reverseArray(arr, 0, length - 1);

  printarray(arr, length);

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  long int number;
  cin >> t;
  while (t--)
  {
    cin >> number;
    int reverse_number = 0, i = 0;
    while (number > 0)
    {
      reverse_number = (reverse_number * 10) + (number % 10);
      // cout<<reverse_number<<" ";
      // cout<<pow(10,i)<<" ";
      number /= 10;
      ++i;
    }
    cout << reverse_number << endl;
  }
  return 0;
}
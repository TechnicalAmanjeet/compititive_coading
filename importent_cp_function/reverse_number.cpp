#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int number)
{
  int reverse_number = 0;
  while (number > 0)
  {
    reverse_number = (reverse_number * 10) + number % 10;
    number /= 10;
  }
  return reverse_number;
}

int main()
{
  int n = 123456789;
  cout << n << endl;
  int reverse_number = reverseNumber(n);
  cout << reverse_number << endl;
}

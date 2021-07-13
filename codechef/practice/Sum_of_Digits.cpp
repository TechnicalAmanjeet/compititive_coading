#include <iostream>
using namespace std;

long long int sum(long long int n)
{
  long long int sum = 0;
  while (n > 0)
  {
    sum = sum + (n % 10);
    n /= 10;
  }
  // cout<<"ram"<<" ";
  return sum;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long int n;
    cin >> n;
    cout << sum(n) << endl;
  }
  return 0;
}

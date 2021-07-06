#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long int n, product = 1;
    cin >> n;
    while (n--)
    {
      long long int x;
      cin >> x;
      product *= x;
    }
    if (product % 10 == 2 || product % 10 == 3 || product % 10 == 5)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}

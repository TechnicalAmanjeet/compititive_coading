#include <iostream>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    long long int i = 2, a = 1, b = 2, sum = 0, temp = 0;
    while (true)
    {
      if (b % 2 == 0)
      {
        sum += b;
      }
      temp = b;
      b = b + a;
      a = temp;
      if (b > n)
      {
        break;
      }
    }
    cout << sum << endl;
  }
  return 0;
}

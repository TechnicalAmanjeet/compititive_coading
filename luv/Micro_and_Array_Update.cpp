#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int a[n];
    cin >> a[0];
    int min = a[0];
    for (int i = 1; i < n; ++i)
    {
      cin >> a[i];
      if (a[i] < min)
      {
        min = a[i];
      }
    }
    if (min >= k)
    {
      cout << 0 << endl;
    }
    else
    {
      cout << k - min << endl;
    }
  }
  return 0;
}

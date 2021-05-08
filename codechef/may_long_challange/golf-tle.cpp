#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, a, b;
    cin >> x >> a >> b;
    int z = 0;
    for (int i = 0; i < x + 1; i += b)
    {
      if (i == a)
      {
        cout << "YES" << endl;
        z = 1;
        break;
      }
    }
    if (z == 0)
    {
      for (int i = x + 1; i > 0; i -= b)
      {
        if (i == a)
        {
          cout << "YES" << endl;
          z = 1;
          break;
        }
      }
    }
    if (z == 0)
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}
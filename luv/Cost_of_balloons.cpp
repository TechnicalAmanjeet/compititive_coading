#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int cg, cp, nop;
    cin >> cg >> cp >> nop;
    int temp;
    if (cg > cp)
    {
      t = cg;
      cg = cp;
      cp = t;
    }
    while (nop--)
    {
      int sum = 0, s1, s2;
      cin >> s1 >> s2;
      if (s1 == 1 && s2 == 1)
      {
        sum += cg + cp;
      }
      else if (s1 == 1 || s2 == 1)
      {
        sum += cg;
      }
    cout << sum << endl;
    }
  }
  return 0;
}

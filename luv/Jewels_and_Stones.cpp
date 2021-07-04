#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string str2, str1;
    int n = 0;
    cin >> str2 >> str1;
    for (int i = 0; i < str1.size(); ++i)
    {
      for (int j = 0; j < str2.size(); j++)
      {
        if (str1[i] == str2[j])
        {
          ++n;
          break;
        }
      }
    }
    cout << n << endl;
  }
  return 0;
}
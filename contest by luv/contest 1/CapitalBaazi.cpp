#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin, s);
  for (int i = 0; i < s.size(); ++i)
  {
    if (s[i] == ' ')
    {
      cout << endl;
    }
    else
    {
      cout << char(int(s[i]) - 32);
    }
  }
  return 0;
}

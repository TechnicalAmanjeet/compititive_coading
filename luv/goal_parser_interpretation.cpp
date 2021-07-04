#include <bits/stdc++.h>
using namespace std;
string interpret(string);
class Solution
{
public:
  string interpret(string command)
  {
    string s = command, b;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '(')
      {
        if (s[i + 1] == ')')
        {
          b.push_back('o');
          ++i;
        }
        else if (s[i + 1] == 'a' && s[i + 2] == 'l' && s[i + 3] == ')')
        {
          b.push_back('a');
          b.push_back('l');
          i += 3;
        }
      }
      else
      {
        b.push_back(s[i]);
      }
    }
    return b;
  }
};

#include <bits/stdc++.h>
using namespace std;

long long int fact(long long int a)
{
  if (a == 0 || a == 1)
  {
    return 1;
  }
  else
  {
    return a * fact(a - 1);
  }
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    long long int a;
    cin >> a;
    cout << fact(a) << endl;
  }

  return 0;
}

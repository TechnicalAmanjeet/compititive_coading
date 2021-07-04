#include <bits/stdc++.h>
using namespace std;

int main()
{
  long int sum1 = 0, sum2 = 0, number;
  cin >> number;
  int psudo_number = number / 3, modulo = number % 3;
  // if(psudo_number%3==0){psudo_number=psudo_number/3;}
  // else{psudo_number=(psudo_number/3)+1;}
  for (int i = 1; i <= psudo_number; i++)
  {
    if (i % 2 != 0)
    {
      sum1 = number;
      sum2 = (number - 1) + (number - 2);
    }
    else
    {
      sum2 = number;
      sum1 = (number - 1) + (number - 2);
    }
  }
  if (modulo == 1)
  {
    if (sum1 < sum2)
    {
      sum1 += 1;
    }
    else
    {
      sum2 += 1;
    }
  }
  else
  {
    if (sum1 < sum2)
    {
      sum1 += 2;
      sum2 += 1;
    }
    else
    {
      sum2 += 2;
      sum1 += 1;
    }
  }
  // cout << psudo_number << " " << sum1 << " " << sum2 << " ";
  cout << abs(sum2 - sum1) << endl;
  return 0;
}
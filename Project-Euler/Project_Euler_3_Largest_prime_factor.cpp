#include <iostream>
using namespace std;

int isprime(long long int a)
{
  if (a == 1 || a == 2)
  {
    return 1;
  }
  long long int i;
  for (i = 2; i <= a / 2; ++i)
  {
    if (a % i == 0)
    {
      return 0;
    }
  }
  if (i > a / 2)
  {
    return 1;
  }
  return 0;
}

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    long long int n,i,p=1;
    cin>>n;
    for(i=n;i>0;i=n/p){
      if(isprime(i)){cout<<i<<endl; break;}
      p+=1;
    }
  }
  return 0;
}

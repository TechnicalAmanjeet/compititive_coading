#include <bits/stdc++.h>
using namespace std;

long long int fact(long long int a){
  long long fact=1;
  for(long long int i=2;i<=a;++i){
    fact*=i;
  }
  return fact;
}

long long int binomial(long long int i,long long int j){
  return (fact(i)/(fact(j)*fact(i-j)));
}

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    long long int  n;
    cin>>n;
    for(long long int i=0;i<n;++i){
      for(long long int j=0;j<=i;++j){
        cout<<binomial(i,j)<<" ";
      }
      cout<<endl;
    }
  }
  

  return 0;
}

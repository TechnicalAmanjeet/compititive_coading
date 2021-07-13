#include <iostream>
using namespace std;

int sum(int n){
  int sum=0;
  sum= sum+n%10;
  while (n>0)
  {
    if(n/10==0){sum=sum+(n%10); return sum;}
    n/=10;
  }
  return 0;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long int n;
    cin>>n;
    cout<<sum(n)<<endl;
  }
  return 0;
}

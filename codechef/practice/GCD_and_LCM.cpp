#include <bits/stdc++.h>
using namespace std;

long long int lcm(long long int a,long long int b){
  long long int c,d;
  if(a>b){c=a;d=a;}
  else{c=b;d=b;}
  while (1)
  {
    if(c%a==0 && c%b==0){break;}
    c+=d;
  }
  return c;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long int a,b;
    cin>>a>>b;
    long long int lcmo = lcm(a,b);
    cout<<(a*b)/lcmo<<" "<<lcmo<<endl;
  }
  return 0;
}
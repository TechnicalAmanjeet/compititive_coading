#include <bits/stdc++.h>
using namespace std;


int main()
{
  int n;
  long long int sum1=0,sum2=0;
  cin >> n;
  while (n--)
  {
    int p1,p2;
    cin>>p1>>p2;
    if(p1>p2){
      if(sum1<(p1-p2)){sum1=(p1-p2);}
    }
    else{if(sum2<(p2-p1))
    {
      sum2=(p2-p1);
    }}
    // cout<<sum<<" ";
  }
  // cout<<sum1<<" "<<sum2;
  if(sum1>sum2){cout<<1<<" "<<sum1;}
  else
  {
    cout<<2<<" "<<sum2;
  }
  
  return 0;
}

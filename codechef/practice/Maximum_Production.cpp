#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int d,x,y,z;
    cin>>d>>x>>y>>z;
    int every_day = x*7;
    int second = (d*y) + (7-d)*z;
    if(every_day>=second)
    {cout<<every_day<<endl;}
    else
    {
      cout<<second<<endl;
    }
    
  }

  return 0;
}

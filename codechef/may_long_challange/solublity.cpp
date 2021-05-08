#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int x,a,b;
    cin>>x>>a>>b;
    int rslt;
    rslt=a+(100-x)*b;
    rslt*=10;
    cout<<rslt<<endl;
  }
  return 0;
}
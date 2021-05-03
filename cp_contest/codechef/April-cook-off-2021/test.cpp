#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n,r,t=0,tm=0;
    cin>>n>>r;
    int a[n],b[n],x;
    for(int i=0;i<n;++i)
    {
      cin>>a[i];
    }
    for(int i=0;i<n;++i)
    {
      cin>>b[i];
    }
    t=b[0];
    tm=t;
    for(int i=1;i<n;++i)
    {
      x=(a[i]-a[i-1])*r;
      if(t>x){ t=t-x+b[i];}
      else { t=b[i];}
      if(t>tm){tm=t;}
    
  }
    cout<<t<<endl;
  }
  return 0;
}
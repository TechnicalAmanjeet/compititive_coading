#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,a,b;
  cin>>t;
  while(t--)
  {
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
      if(i%2==0)
      {
        for(int j=1;j<=b;j++)
      {
       if(j%2==0){cout<<"*";} 
       else{cout<<".";}
      }
      }
      else
      {
        for(int j=1;j<=b;j++)
      {
        if(j%2==0){cout<<".";} 
       else{cout<<"*";}
      }
      }
      cout<<endl;
    }
    cout<<endl;
  }
  return 0;
}
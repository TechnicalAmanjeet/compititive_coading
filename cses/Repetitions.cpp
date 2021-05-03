#include<bits/stdc++.h>
using namespace std;

int main()
{
  string a;
  cin>>a;
  int b=1,i,max=1,t=a.length();
  for(int i=1;i<t;++i)
  {
    if(a[i]==a[i-1]){++b;}
    else{
      if(max<b){max=b;}
      b=1;
    }
  }
  if(max<b){max=b;}
  cout<<max;
  return 0;
}
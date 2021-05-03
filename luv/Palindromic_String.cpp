#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int i, flag=0;
  for( i=0;i<s.size()/2;i++)
  {
    if(s[i]!=s[s.size()-i-1]){cout<<"NO"; flag=1; break;}
  }
  if(i==s.size()/2 && flag==0){cout<<"YES"<<endl;}
  return 0;
}
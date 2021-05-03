#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,sum,i=1;
  string s;
  cin>>t;
  while(t--){
    cin>>s;
    sum=0;
    for(int i=0;i<s.length();i++)
    {
      sum+=int(s[i]);
    }
    if(sum%3==0){cout<<"Case "<<i<<": "<<"Yes"<<endl;}
    else{cout<<"Case "<<i<<": "<<"No"<<endl;}
    ++i;
  }
  return 0;
}
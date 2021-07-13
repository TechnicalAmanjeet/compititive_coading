#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    string s;
    cin>>s;
    int size=s.size(),one=0,two=0;
    for(int i=0;i<size;i++){
      if(s[i]=='1'){++one;}
      else{++two;}
    }
    if(one==1 || two == 1){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}
  }
  
  return 0;
}
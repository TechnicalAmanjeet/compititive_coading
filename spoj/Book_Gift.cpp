#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,c,b;
  cin>>t;
  while(t--){
    cin>>c>>b;
    if(b%c==0){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
  }
  return 0;
}
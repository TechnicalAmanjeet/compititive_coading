#include<bits/stdc++.h>
using namespace std;

int main()
{
  int am,t,bm,cm,tm,a,b,c;
  cin>>t;
  while(t--){
    cin>>am>>bm>>cm>>tm>>a>>b>>c;
    if(a>=am && b>=bm && c>=cm && (a+b+c)>=tm) { cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}
  }
  return 0;
}
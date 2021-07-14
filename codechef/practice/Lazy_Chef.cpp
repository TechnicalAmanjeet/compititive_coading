#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int mul=a*b;
    int add=a+c;
    if(mul>add){cout<<add<<endl;}
    else{cout<<mul<<endl;}
  }
}
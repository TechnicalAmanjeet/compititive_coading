#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n,x,y;
  cin>>n;
  if(n==1){cout<<n;   }
  else if(n==2 || n==3)
  {cout<<"NO SOLUTION";}
  else{
    if(n%2==0){x=n;y=n-1;}
    else{x=n-1;y=n;}
    for(int i=2;i<=x;i+=2){cout<<i<<" ";}
    for(int i=1;i<=y;i+=2){cout<<i<<" ";}
  }
  return 0;
}
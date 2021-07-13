#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k,t,sum=0;
  cin>>n>>k;
  while (n--)
  {
    cin>>t;
    if(t%k==0){++sum;}
  }
  cout<<sum;
  return 0;
}
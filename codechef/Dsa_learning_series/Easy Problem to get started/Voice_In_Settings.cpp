#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {cin>>a[i];}
  sort(a,a+n);
  int t=a[0]*n;
  for(int i=1;i<n-1;i++)
  {
    if(t<((n-i)*a[i])){t=a[i]*(n-i);}
  }
  cout<<t;
}
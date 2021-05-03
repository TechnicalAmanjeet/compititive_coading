#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t,fact;
  cin>>t;
  while (t--)
  {
    cin>>n;
    if(n==0){cout<<1<<endl; continue;}
    fact=1;
    for(int i=1;i<=n;i++){fact*=i;}
    cout<<fact<<endl;
  }
  return 0;
}
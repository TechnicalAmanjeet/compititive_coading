#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int f=2;
  int s[n];
  s[0]=1;
  for(int i=2;i<=n/2;i++)
  {
    if(n%i==0){f+=1;s[f-2]=i;}
  }
  cout<<f<<endl;
  s[f-1]=n;
  for(int i=0;i<f;i++){cout<<s[i]<<" ";}
  return 0;
}
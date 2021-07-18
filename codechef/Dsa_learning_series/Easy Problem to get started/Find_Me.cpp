#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int a,k;
  cin>>a>>k;
  int p;
  for(int i=0;i<a;++i){
      cin>>p;
      if(p==k){cout<<1;return 0;}
  }
  cout<<"-1";
  return 0;
}
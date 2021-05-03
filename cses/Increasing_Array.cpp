#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n,x,y,count=0;
  cin>>n;
  cin>>x;
  y=x;
  --n;
  while(n--)
  {
    cin>>x;
    if(x<y){count+=(y-x);}
    else{y=x;}
  }
  cout<<count;
  return 0;
}
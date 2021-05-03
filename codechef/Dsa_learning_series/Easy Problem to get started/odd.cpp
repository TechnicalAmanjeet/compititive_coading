#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  if(a%2==0){
    a=a+1;
  }
  if(b%2==0){
    b=b-1;
  }
  for(int i=a;i<=b;i+=2){
    cout<<i<<" ";
  }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int reverse(int);
int main(){
  int t,k;
  cin>>t;
  for(int i=0;i<t;i++){ 
    cin>>k;
    cout<<reverse(k)<<endl;
  }
  return 0;  
}

int reverse(int k){
  int p=0;
  while(k>0){
    p=p*10+k%10;
    k/=10;
}
 return p;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(1){
    cout<<n<<" ";
    if(n%2==0){n/=2;}
    else{n=n*3+1;}
    if(n==1){cout<<n; break;}
  }
  return 0;
}
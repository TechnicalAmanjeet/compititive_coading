#include<bits/stdc++.h>
using namespace std;
int reverse(int);
int main(){
  int n,toffe=0;
  float a,b;
  cin>>n;
  while(n--){
    cin>>a>>b;
    b=100*b;
    a=(2*22*a)/7;
    if(b>=a){++toffe;}
  }
  cout<<toffe<<endl;
 return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int cnt=0;
  for(int i=1;i<=n;++i){
      if(i%2!=0){
          for(int j=1;j<=5;++j){
              cout<<(cnt*10)+j<<" ";
          }
          ++cnt;
          cout<<endl;
      }
      else{
          for(int j=0;j<5;++j){
              cout<<(cnt*10)-j<<" ";
          }
          cout<<endl;
      }
  }
  return 0;
}
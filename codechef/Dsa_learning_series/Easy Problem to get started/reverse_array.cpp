#include<bits/stdc++.h>
using namespace std;
int main(){
  int a;
  cin>>a;
  int b[a];
  for(int i=0;i<a;i++) { cin>>b[i];}
  for(int i=a-1;i>=0;i--) {cout<<b[i]<<" ";}
  return 0;
}
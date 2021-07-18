#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,cont=0;
  cin>>n;
  int arr[n];
  for(int i=1;i<=n/2;++i){
    if(n%i==0){arr[cont]=i;++cont;}
  }
  cout<<cont+1<<endl;
  for(int i=0;i<cont;++i){
    cout<<arr[i]<<" ";
  }
  cout<<n;
  return 0;
}
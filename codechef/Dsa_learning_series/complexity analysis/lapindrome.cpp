#include<bits/stdc++.h>
using namespace std;
string lapindrome(string);
int main(){
  int t;
  string k;
  cin>>t;
  for(int i=0;i<t;i++){cin>>k; cout<<lapindrome(k)<<endl;}
  return 0;  
}

string lapindrome(string k){
  int m=0;
  int l=k.length();
  char a[l/2],b[l/2];
  for(int i=0;i<l/2;i++){ 
    a[i]=k[i];
     b[i]=k[l-i-1];
  }
  sort(a,a+l/2);
  sort(b,b+l/2);
  for(int i=0;i<l/2;i++){if(a[i]!=b[i]){m=1;break;}}
  if(m==0){return "YES";}
  else{return "NO";}
}
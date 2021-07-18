#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[3];
  for(int i=0;i<3;i++){ cin>>a[i];}
  sort(a,a+3);
  double s=(a[0]+a[1]+a[2])/2.0;
  double c,d,e;
  c=s-a[0];
  d=s-a[1];
  e=s-a[2];
  double p=s*c*d*e;
  double A=sqrt(p);
  // cout<<A<<" "<<s<<endl;
  if(A>0)
   {if((a[0]+a[1])<a[2]){ cout<<"-1";}
  else if((a[0]==a[1]) && a[0]==a[2]){cout<<"1";}
  else if(a[0]==a[1] || a[1]==a[2] || a[2]==a[1]){cout<<"2";}
  else {cout<<"3";}}
  else{cout<<"-1";}
  
  return 0;
}
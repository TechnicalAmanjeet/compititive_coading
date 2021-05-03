#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n],b[n],x,y;
  cin>>a[0]>>b[0];
  x=a[0];
  y=a[0];
  for(int i=1;i<n;i++){
    cin>>a[i];
    if(x>a[i]){x=a[i];}
    cout<<x<<" "<<a[i]<< ;
     }
  for(int i=0;i<n;i++){
    cin>>b[i];
    if(y<b[i])
    {
      y=b[i];
    }}
    
  if(y-x<=0){cout<<'0';}
  else{cout<<y-x;}
  
  
  return 0;
}
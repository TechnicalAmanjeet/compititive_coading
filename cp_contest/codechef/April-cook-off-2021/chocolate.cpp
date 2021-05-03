#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t,i,j,n,x;
  cin>>t;
  int d=1;
  while(t--){
    cin>>n>>x;
    int a[n];
    cin>>a[0];
    d=1;
    for( i=1;i<n;i++)
    {
      cin>>a[i];
      for(j=0;j<=i;j++){
        if(a[j]==a[i]){break;}
              }
      if(i==j && a[i]!=a[j-1]){ d+=1;}
  
    }
    
    if((n-d)>=x){cout<<d<<endl;}
    else{int p=x-(n-d); cout<<d-p<<endl;}
  }
  return 0;
}
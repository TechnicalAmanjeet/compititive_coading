#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,start,end,n;
  cin>>t;
  while(t--)
  {
    cin>>start>>end;
    
    if(start==1) { start+=1;}
    if(start==2) {cout<<start<<endl; start+=1;}
    for(int i=start;i<=end;i++)
    { n=0;
      
      for(int j=2;j<=(i/2)+1;j++)
      { 
        if(i%j==0) { n=1; break;}
      }
      if(n==0) { cout<<i<<endl;}
    }
    cout<<endl;
  }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,p,q,r;
  cin>>a>>b>>c;
  if(a>=b && a>=c){ p=b;q=c;r=a;}
  else if(b>=a && b>=c){p=a;q=c;r=b;}
  else if(c>=a && c>=b){p=a;q=b;r=c;}
  if((p+q)>=r) { cout<<"YES";}
  else{ cout<<"NO";}
  return 0;
}
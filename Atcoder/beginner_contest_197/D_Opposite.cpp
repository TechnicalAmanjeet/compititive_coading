#include<bits/stdc++.h>
using namespace std;
int main(){
  int p;
  float a,b,c,d;
  cin>>p>>a>>b>>c>>d;
  float n=(p/2)-1;
  double x= ((c+n*a))/(n+1);
  double y=  (d+n*b)/(n+1);
  cout<<fixed<<setprecision(11)<<x<<endl;
  cout<<fixed<<setprecision(11)<<y<<endl;
  return 0;
}
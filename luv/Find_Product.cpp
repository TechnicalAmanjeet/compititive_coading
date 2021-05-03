#include<bits/stdc++.h>
using namespace std;
int reverse(int);
int main(){
  long long int a,b,s=1;
  cin>>a;
  while(a--)
  {
    cin>>b;
    s=s*b%1000000007;
  }

  cout<<s<<endl;
return 0;
}
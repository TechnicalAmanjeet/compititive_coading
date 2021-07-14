#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t ;
  cin >> t;
  int i=10;
  while(i!=0){
    if(t%i==0){cout<<i;break;}
    --i;
  }
}
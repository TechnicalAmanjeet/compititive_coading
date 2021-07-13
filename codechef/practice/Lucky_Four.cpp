#include <bits/stdc++.h>
using namespace std;

int count4(int n){
  int count =0;
  while (n>0)
  {
    if(n%10==4){++count;}
    n/=10;
  }
  return count;
}

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    cout<<count4(n)<<endl;
  }
  return 0;
}

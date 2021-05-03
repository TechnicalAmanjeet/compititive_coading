#include<bits/stdc++.h>

using namespace std;

int main()
{
  string a="ram",b="shyam";
  char t=a[0];
  cout<<a<<" "<<b<<"\n";
  a[0]=b[0];
  b[0]=t;
  cout<<a<<" "<<b;
  return 0;
}
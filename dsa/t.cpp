#include<bits/stdc++.h>

using namespace std;

int main()
{
  int a=10,b=20;
  int *c,*d;
  c=&a;
  d=&b;
  *c=5;
  *d=10;
  cout<<*c<<" "<<*d<<" "<<a+b<<" "<<a<<" "<<b;
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    int a,b;
    cin>>a>>b;
    int c[a];
    cin>>c[0];
    int m=c[0];
    for(int i=1;i<a;i++)
    {
      cin>>c[i];
      if(c[i]<m){m=c[i];}
    }
    cout<<b-m<<endl;
  }
  return 0;
}
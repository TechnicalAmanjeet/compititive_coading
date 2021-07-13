#include <bits/stdc++.h>
using namespace std;



int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int a,b,x;
    cin>>a>>b>>x;
    if((b-a)%x == 0){cout<<((b-a)/x)<<endl;}
    else
    {
      cout<<((b-a)/x)+1<<endl;
    }
    
  }

  return 0;
}

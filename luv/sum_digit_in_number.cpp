#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int t,a,sum;
    cin>>t;
    while(t--)
    {
      cin>>a;
      sum=0;
      while(a>0)
      {
        sum+=a%10;
        a/=10;
      }
      cout<<sum<<endl;
    }
    return 0;
}

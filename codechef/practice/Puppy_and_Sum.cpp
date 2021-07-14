#include <bits/stdc++.h>
using namespace std;

int sum(int n){
  return((n*(n+1)/2));
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int d,n;
    cin>>d>>n;
    while (d--)
    {
      n = sum(n);
    }
    cout<<n<<endl;
  }
  return 0;
}
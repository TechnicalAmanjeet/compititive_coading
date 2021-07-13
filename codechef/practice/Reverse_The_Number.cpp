#include <bits/stdc++.h>
using namespace std;

int reverse(int a){
  int rev = 0;
  while (a>0)
  {
    rev=(rev*10)+(a%10);
    // cout<<rev<<" "<<a<<" ";
    a/=10;
  }
  return rev;
}


int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int a;
    cin >> a;
    cout << reverse(a) << endl;
  }

  return 0;
}

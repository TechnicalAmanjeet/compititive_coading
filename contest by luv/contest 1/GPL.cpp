#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    char str;
    long long int sum=0;
    for(int i=0;i<n;i++){
      cin>>str;
      if(str=='1')
      {
        sum += pow(2, (n-i-1));
        // cout<<str<<" "<<sum<<" "<<endl;
      }
    }
    cout<<sum<<endl;
  }
  
  return 0;
}

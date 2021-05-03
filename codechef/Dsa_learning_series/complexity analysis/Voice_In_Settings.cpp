#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  long long int a[n];
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  int t=0;
  for(int i=0;i<n;i++)
  {  if(t<(a[i]*(n-i))){ t=a[i]*(n-i);}
    }
    cout<<t;
    return 0;
}
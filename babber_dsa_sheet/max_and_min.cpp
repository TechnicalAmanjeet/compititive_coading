#include<bits/stdc++.h>
using namespace std;

struct mm
{
  int max;
  int min;
};

//mm func(int arr, int);

 mm func(int arr[],int n)
{
  struct mm m;
  m.min=arr[0];
  m.max=arr[0];
  for(int i=0;i<n;i++)
  {
    if(arr[i]<m.min){m.min=arr[i];}
    if(arr[i]>m.max){m.max=arr[i];}
  }
  return m;
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  mm output=func(arr,n);
  cout<<output.min<<" "<<output.max<<endl;
  return 0;
}
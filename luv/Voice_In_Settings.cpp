  #include<bits/stdc++.h>
  using namespace std;
  int reverse(int);
  int main(){
  int c;
  cin>>c;
  while(c--)
  {
    int n;
    cin>>n;
    int arr[n];
    int f=1;
    cin>>arr[0];
    int d=arr[0];
    for(int i=1;i<n;i++)
    {
      cin>>arr[i];
      if(d>arr[i-1]){f+=1;d=arr[i];}
    }
    cout<<f<<endl;
  }
  return 0;
  }
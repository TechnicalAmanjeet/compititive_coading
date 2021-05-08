// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
  void sort012(int a[], int n)
  {
    // coode here
    int a=0;b=0,c=0;
    for(int i=0;i<n;i++)
    {
      if(a[i]==0){a+=1;}
      else if(a[i]==1){b+=1;}
      else{c+=1;}
      for(int i=0;i<a;i++){a[i]=0;}
      for(int i=a;i<a+b;i++){a[i]=1;}
      for(int i=a+b;i<a+b+c;i++){a[i]=2;}
    }
  }
};

// { Driver Code Starts.
int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    Solution ob;
    ob.sort012(a, n);

    for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }

    cout << endl;
  }
  return 0;
}

// } Driver Code Ends
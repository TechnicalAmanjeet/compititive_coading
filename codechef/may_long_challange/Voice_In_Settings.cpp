#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int x,a,b;
    cin>>x>>a>>b;
    int z=0;
    if(a%b==0){cout<<"YES"<<endl;continue;}
    for(int i=2;i<=(x+1-a)/2;i++)
    {if(b%i==0 && (x+1)%2==0){cout<<"YES"<<endl;z=1;break;}
    
    }
    if(z==1){continue;}
      cout << "NO" << endl;
    
  }
  return 0;
}
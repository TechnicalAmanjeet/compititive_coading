#include<bits/stdc++.h>
using namespace std;
int main()
{
  
    int s[3][3];
    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
      {cin>>s[i][j];}
    }
    cout<<s[0][0]+s[0][2]+s[1][1]+s[2][0]+s[2][2]<<endl;
    cout<<s[0][1]+s[1][0]+s[1][2]+s[2][1]<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  { string s;
    cin>>s;
    int cont=1;
    int i,b;
    for( i=i;i<s.size()-1;i++)
    {
      if(s[i]=='a')
       {if((s[i-1]=='b' || s[i-1]=='z') && (s[i+1]=='b' || s[i+1]=='z') )
         { cont+=1;}
         else{cout<<"NO"<<endl; break;}       
       }
    else if(s[i]=='z')
    {if((s[i-1]=='a' || s[i-1]=='y') && (s[i+1]=='a' || s[i+1]=='y'))
      {cont+=1;}    
      else{cout<<"NO"<<endl; break;}
    }
    else{
      if((int(s[i])==int(s[i-1])+1 || int(s[i])==int(s[i-1])-1) && ((int(s[i])==int(s[i+1])+1 || int(s[i])==int(s[i+1])-1)))
      {cont+=1;      }
      else{cout<<"NO"<<endl;break;}
    }
    }
    if(cont==i-1){cout<<"YES"<<endl;}
    cout<<cont<<" " <<i<<" " <<s.size()<<endl;

  }
  return 0;
}
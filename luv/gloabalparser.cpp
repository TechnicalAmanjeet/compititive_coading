#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s,b;
  cin>>s;
  for(i=0;i<s.size();i++)
  {
    if(s[i]=='('){
      if(s[i+1]==')') {b.push_back('0');++i;}
      else(s[i+1]=='a' && s[i+2]=='l' && s[i+3]==')'){ b.push_back('a');b.push_back('l');i+=3;}

    }
    else{b.push_back(s[i])}
  }
  cout<<b<<endl;
  return 0;
}
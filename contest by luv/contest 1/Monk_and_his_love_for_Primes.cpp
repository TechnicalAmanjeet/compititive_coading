#include <bits/stdc++.h>
using namespace std;

int isprime(long long int a){
  if(a==1 || a==2){return 1;}
  long long int i;
  for (i = 2; i <= a / 2; ++i)
  {
    if(a%i==0){return 0;}
  }
  if(i>a/2){return 1;}
}

int main()
{
  string str;
  long long int uc=0,lc=0,total=0;
  cin>>str;
  for(int i=0;i<str.size();++i){
    if(str[i]>='a' && str[i]<='z'){uc+=int(str[i])-32;}
    else{lc+=int(str[i])+32;}
  }
  total=abs(uc-lc);
  cout<<isprime(total)<<endl;
  return 0;
}

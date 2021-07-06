#include <bits/stdc++.h>
using namespace std;
long long int lcma(long long int a,long long int b){
  long long int lcm;
  if (a > b)
    lcm = a;
  else
    lcm = b;
  while (1)
  {
    if (lcm % a == 0 && lcm % b == 0)
    {
      return lcm;
      break;
    }
    lcm++;
  }
}
int main()
{
  long long int a,b,c,cont=1,number=0;
  cin>>a>>b>>c;
  if(a>b){swap(a,b);}
  for(int i=a+1;i>=a;i++){
    if(cont==c){number=i-1;break;}
    if(i%a==0 || i%b==0){
      cont++;
    }
  }
  long long int x;
  if(number%a==0 && number%b==0){x=lcma(a,b);}
  else if(number%a==0){
    x=a;
  }
  else
  {
    x=b;
  }
  for(int i=number;i>=0;i=i-x)
  {
    cout<<i<<" ";
  }
  
  return 0;
}

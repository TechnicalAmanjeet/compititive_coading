#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,c,x,y;
  cin>>h>>c>>x>>y;
  string s[h];
  for(int i=0;i<h;i++){cin>>s[i];}
  int sum=1;
  int r=x-1;
  int v=y-1;
  for(int i=y;i<c;i++){
    if(s[r][v]==s[r][i]){sum+=1;}
    else{break;}
  }
  for(int i=y-2;i>=0;i--){
    if(s[r][v]==s[r][i]){sum+=1;}
    else{break;}
  }
  for(int i=x;i<h;i++){
    if(s[r][v]==s[i][v]){sum+=1;}
    else{break;}
  }
  for(int i=x-2;i>=0;i--){
    if(s[r][v]==s[i][v]){sum+=1;}
    else{break;}
  }
  cout<<sum;
  return 0;
}
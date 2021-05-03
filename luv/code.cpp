#include<bits/stdc++.h>
using namespace std;
int reverse(int);
int main(){
 int c;
 cin>>c;
 while(c--)
 {
   string a,b;
   int sum=0;
   int i,j;
   cin>>a>>b;
   for(i=0;i<b.size();i++)
   {  
     for(j=0;j<a.size();j++)
     {
       if(a[j]==b[i]){ sum+=1; break;}
     }
       
   }
   cout<<sum<<endl; 
 }
 return 0;
}
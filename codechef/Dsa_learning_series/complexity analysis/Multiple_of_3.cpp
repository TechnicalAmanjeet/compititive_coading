#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       long long int n,a,b;
       cin>>n>>a>>b;
       long long int sum=a+b;
       for(int i=2;i<n;++i){
           long long int p = sum%10;
           sum = sum+p;
           
       }

       if(sum%3==0){cout<<"YES"<<endl;}
       else{cout<<"NO"<<endl;}
    }
}
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,t=1;
    cin>>n;
    for(int i=1;i<=n;++i){
        if(i%2!=0){
            for(int j=t;j<j+5;++j) cout<<j<<" ";
            t=10*i;
        }
        else{
            for(int j=t;j>=t-5;--j) cout<<j<<" ";
            t+=1;
        }
    }
    return 0;
}
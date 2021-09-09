#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int m[a],n[b];
    cin>>m[0];
    int  l=m[0];
    for(int i=1;i<a;++i){
        cin>>m[i];
        if(l>m[i]) l=m[i];
    }
    cin>>n[0];
    int k=n[0];
    cout<<k<<" ";
    for(int i=1;i<b;++i){
        if(k>n[i]) k=n[i];
    }
    cout<<l<<" ";
    cout<<abs(l-k);
    return 0;
}
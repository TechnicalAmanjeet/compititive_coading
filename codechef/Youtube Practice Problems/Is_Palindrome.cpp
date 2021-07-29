#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t=0,temp=n;
    while(temp>0) {
        t=(t*10)+temp%10;
        temp/=10;
    }
    if(t==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
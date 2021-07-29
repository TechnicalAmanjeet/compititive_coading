#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t=10;
    for(int i=1;i<=n;++i){
        if(i%2==0){
            cout<<t/5<<" ";
            t+=10;
        }
        else cout<<t<<" ";
    }
    return 0;
}
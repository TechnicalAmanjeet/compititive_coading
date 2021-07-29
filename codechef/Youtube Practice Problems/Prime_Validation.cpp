#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n==1 or n==2 ) return 1;
    else if(n%2==0) return 0;
    else
    {
        int i=2;
        for(i=3;i<=n/2;++i){
            if(n%i==0) return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(isprime(n)) cout<<1<<endl;
    else cout<<0<<endl;
    return 0;
}
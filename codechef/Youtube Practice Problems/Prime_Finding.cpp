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
    int temp=0,t=2;
    while(temp!=n){
        if(isprime(t)){
            cout<<t<<" ";
            ++temp;
        }
        ++t;
    }
    return 0;
}
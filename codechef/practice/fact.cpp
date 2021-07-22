#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

ll fact(ll i){
    if(i==0 || i==1) return 1;
    else return i*fact(i-1);
}

int main(){
    ll x =5;
    cout<<fact(x);
}
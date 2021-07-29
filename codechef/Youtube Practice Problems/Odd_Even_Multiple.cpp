#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%3==0){
        if((n/3)%2==0) cout<<0<<endl;
        else cout<<1<<endl;
    }
    else cout<<-1<<endl;
    return 0;
}
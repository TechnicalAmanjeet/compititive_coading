#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cont =0;
        if(n<5){cout<<'0'<<endl;}
        else{
            for(int i=5;i<=n;i+=5){
                ++cont;
            }
            cout<<cont<<endl;
        }
    }
}
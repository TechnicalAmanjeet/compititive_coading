#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p,cont=1;
        cin>>p;
        for(int i=1;i<n;++i){
            int x;
            cin>>x;
            if(p>x){++cont; p=x;}        
        }
        cout<<cont<<endl;
    }
}
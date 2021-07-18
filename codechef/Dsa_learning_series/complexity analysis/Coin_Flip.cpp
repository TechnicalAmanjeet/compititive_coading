#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int z;
        cin>>z;
        while(z--){
            int i,n,q;
            cin>>i>>n>>q;
            if(i==q){
                cout<<n/2<<endl;
            }
            else{
                if(n%2==0){cout<<n/2<<endl;}
                else{
                    cout<<(n/2)+1<<endl;
                }
            }
        }
    }
}
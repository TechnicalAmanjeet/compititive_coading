#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i>=b;--i){
        if(i%b==0) {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;++i) { cin>>arr[i]; if(arr[i]==s){cout<<1<<endl; return 0;}}
    cout<<-1<<endl;
    return 0;
}
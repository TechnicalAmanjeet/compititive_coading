#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    long long int total=0,temp=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    total = n*arr[0];
    for(int i=1;i<n;++i){
        temp = arr[i]*(n-i);
        if(temp>total){total=temp;}
    }
    cout<<total;
}
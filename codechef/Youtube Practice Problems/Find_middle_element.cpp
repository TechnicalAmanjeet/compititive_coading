#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int arr[5];
        for(int i=0;i<5;++i) cin>>arr[i];
        sort(arr,arr+5);
        cout<<arr[2]<<endl;
    }
    return 0;
}
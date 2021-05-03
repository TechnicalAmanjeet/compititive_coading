#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>1000000000){cout<<n/4-1;}
    else{cout<<n/5;}
    return 0;
}

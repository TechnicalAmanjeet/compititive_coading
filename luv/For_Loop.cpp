#include <bits/stdc++.h>

using namespace std;



int main()
{
    int a,b,i;
    
    cin>>a>>b;
    
    // Write Your Code Here
    string arr[9]={"one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" };
    
    for(i=a;i<=b;i++)
    {
       if (i<10) {
         cout<<arr[i-1]<<"\n";
       }
       else if (i%2==0) {
       cout<<"even"<<'\n';
       }
       else {
       cout<<"odd"<<'\n';
       }
    }

    return 0;
}

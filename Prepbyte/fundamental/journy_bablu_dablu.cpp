#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      switch(n){
          case 1:
             cout<<"4LB"<<endl;
             break;
        case 2:
            cout<<"5MB"<<endl;
            break;
        case 3:
            cout<<"6UB"<<endl;
            break;
        case 4:
            cout<<"1LB"<<endl;
            break;
        case 5:
            cout<<"2MB"<<endl;
            break;
        case 6:
            cout<<"3UB"<<endl;
            break;
        case 7:
            cout<<"8SU"<<endl;
            break;
        case 8:
            cout<<"7SL"<<endl;
            break;
      }
  }
  
  return 0;
}
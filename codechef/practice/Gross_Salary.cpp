#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int basic_salary;
    cin>>basic_salary;
    float hra,da;
    if(basic_salary < 1500){
      hra = (basic_salary*10)/100.00;
      da = (basic_salary*90)/100.00;
    }
    else{
      hra = 500;
      da = (basic_salary*98)/100.00;
    }
    cout<<fixed<<setprecision(2)<<(basic_salary+hra+da)<<endl;
  }
  return 0;
}
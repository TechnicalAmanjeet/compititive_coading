#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int quantitiy,price;
    cin>>quantitiy>>price;
    double total_price = quantitiy * price *1.00;
    if(int(quantitiy)>1000){
      total_price = total_price - (total_price*10)/100;
    }
    cout<<fixed<<setprecision(6)<<total_price<<endl;
  }
  return 0;
}
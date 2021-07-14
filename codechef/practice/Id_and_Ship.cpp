#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    char c;
    cin>>c;
    if(int(c)==int('b') || int(c)==int('B')){cout<<"BattleShip"<<endl;}
    if(int(c)==int('c') || int(c)==int('C')){
      cout << "Cruiser"<<endl;
    }
    if(int(c)==int('d') || int(c)==int('D')){
      cout << "Destroyer"<<endl;
    }
    if(int(c)==int('f') || int(c)==int('F')){
      cout << "Frigate"<<endl;
    }
  }
  return 0;
}
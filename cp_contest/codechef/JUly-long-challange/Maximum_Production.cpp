#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    int daylessthen7,xfirstwayofwork,y,z;
    cin>>daylessthen7>>xfirstwayofwork>>y>>z;
    int firstway,secondway;
    firstway = xfirstwayofwork*7;
    secondway = (7-daylessthen7)*z + (daylessthen7*y);
    firstway>secondway?cout<<firstway<<endl:cout<<secondway<<endl;
  }
  return 0;
}

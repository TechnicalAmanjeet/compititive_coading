#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<"\n"<<a+b<<"\n";
    char t=a[0];
    a[0]=b[0];
    b[0]=t;
    cout<<a<<" "<<b;
    return 0;
}

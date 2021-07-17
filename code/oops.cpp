#include<bits/stdc++.h>
using namespace std;

class Boy{
private:

public:
	string name;
	int age;
	int bankbalance;
	void range(int ran){cout<<ran<<endl;}
	// Boy(){
	// 	cout<<"How are YOU..";
	// }
};

int main(){
	Boy	aman;
	aman.name = "Amanjeet";
	aman.age = 21;
	aman.bankbalance = 100000000;

	Boy riya;
	riya.name = " Riya";
	riya.age = 17;
	riya.bankbalance = 100000000;

	cout<<aman.name<<" "<<aman.age<<" "<<aman.bankbalance;
	cout<<riya.name<<" "<<riya.age<<" "<<riya.bankbalance; 
	aman.range(riya.age);
	riya.range(aman.age);
	return 0;
}
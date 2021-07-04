#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    	int number;
    	string str;
    	cin>>number>>str;
    	int count=1;
    	for(int i=1;i<number;i++)
    	{
    		if(str[i]!=str[i-1]){++number;}
    	}
    	cout<<number<<endl;
    }
    return 0;
}

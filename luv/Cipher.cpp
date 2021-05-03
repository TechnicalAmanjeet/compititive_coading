#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s;
    int n;
    cin>>s>>n;
    for(int i=0;i<s.size();i++)
    {  if(( int(s[i])>=int('A') && int(s[i]) <=int('Z')))
        { if(int(s[i])+n%26>int('Z')) 
          {cout<<char(int('A')+(int(s[i])+n%26-int('Z')-1));}
          else{cout<<char(int(s[i])+n%10);}
        }
    
    
      else if( int(s[i])>=int('a') && int(s[i]) <=int('z')) 
      { if(int(s[i])+n%26>int('z'))
         {cout<<char(int('a')+(int(s[i])+n%26-int('z')-1));}
        else{cout<<char(int(s[i])+n%26);}} 

      else if( int(s[i])>=int('0') && int(s[i]) <=int('9'))
        {if(int(s[i])+n%10>int('9')) 
            {cout<<char(int('0')+(int(s[i])+n%10-int('9')-1));}
          else{cout<<char(int(s[i])+n%10);}} 

      else{cout<<s[i];}
    }
    return 0;
}

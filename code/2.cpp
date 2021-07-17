#include <iostream>
using namespace std;

struct people{
  string name;
  int age;
};

void showdata(people data){
    cout<<"Name : "<<data.name<<" age: "<<data.age;
  }

people adddata(people data,string name,int age){
   data.name = name;
   // cout<<data.name<<" ";
   data.age = age;
   return data;
}

int main(){
 people ram;
 ram.name = "ram";
 ram.age = 13;
 showdata(ram);
 cout<<endl;
 ram= adddata(ram,"Ram",12);
 showdata(ram);

  return 0;
}

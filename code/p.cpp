#include <bits/stdc++.h>
using namespace std;
long long int n=0;
class school
{
private:
	 // int n=0; 
public:
  string name;
  int total_teacher, total_student;
  void setdata();
  void display();
  school(){
  	cout<<endl<<(n+1)<<"'s obsject created of school class"<<endl;
  	n=n+1;
  	cout<<"no. of obsject is : "<<n;  
  }
  void number_of_object(){
  	cout<<"\n Total No. of obsject of school class : "<<n<<endl;
  }
};

void school ::display()
{
  cout << endl;
  cout << "Your school name is : " << name << endl;
  cout << "Total No of Teacher in " << name << " is : " << total_teacher << endl;
  cout << "Total no. of student in " << name << " is : " << total_student << endl;
  cout << "\n Thank you show much for calling me!!" << endl;
}

void school ::setdata()
{
  // cout << "Enter Your school name : ";
  getline(cin, name);
  // cin>>name;
  // cout << "Enter Total student no. : ";
  cin >> total_student;
  // cout << "Enter Total Teacher no : ";
  cin >> total_teacher;
  cin.ignore();
}

int main()
{
  school salrpur;
  salrpur.setdata();
  salrpur.display();
  school amarpur;
  amarpur.setdata();
  amarpur.display();
  amarpur.number_of_object();
  salrpur.number_of_object();
  return 0;
}
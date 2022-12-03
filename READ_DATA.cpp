#include <iostream>
using namespace std;
int main()
{
  int age;
  string name;
  cout<<"Please type your full name "<<endl;
  getline(cin,name);
  cout<<"Please type your age "<<endl;
  cin>>age;
  cout<<"Hello "<<name<<",You're "<<age<<" years old."<<endl;
  return 0;
}

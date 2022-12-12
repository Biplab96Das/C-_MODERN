#include<iostream>
using namespace std;
int main()
{ cout<<"----------Relational Operator------------"<<endl;
   int num1=45;
   int num2 {60};
   cout<<boolalpha;
   cout<<"Is Number1 < Number2 ? 1 : 0 ="<<(num1<num2)<<endl;
   cout<<"Is Number1 <= Number2 ? 1 : 0 ="<<(num1<=num2)<<endl;
   cout<<"Is Number1 > Number2 ? 1 : 0 ="<<(num1>num2)<<endl;
   cout<<"Is Number1 >= Number2 ? 1 : 0 ="<<(num1>=num2)<<endl;
   cout<<"Is Number1 == Number2 ? 1 : 0 ="<<(num1==num2)<<endl;
   cout<<"Is Number1 != Number2 ? 1 : 0 ="<<(num1!=num2)<<endl;
  return 0;
}
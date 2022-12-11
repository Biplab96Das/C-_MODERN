#include<iostream>
using namespace std;
int main()
{
   int num1 {2};
   int num2 {7};
   int sum=num1+num2;
   cout<<"Summation= "<<sum<<endl;
   int sub=num2-num1-num1;
   cout<<"Subtraction= "<<sub<<endl;
   int mult=num1*num2;
   cout<<"Multiplication= "<<mult<<endl;
   int div=num2/num1;
   cout<<"Division= "<<div<<endl;
   int mod=num2%num1;
   cout<<"Modulus or Remainder= "<<mod<<endl;
   return 0;
   }
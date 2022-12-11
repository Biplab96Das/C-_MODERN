#include<iostream>
using namespace std;
int main()
{
   int var {123};//Declare and initialize
   cout<<"var= "<<var<<endl;
   var=888;//Assign
   cout<<"var= "<<var<<endl;
   cout<<"--------------------------"<<endl;
   double var2 {99.99};//Declare and initialize
   cout<<"var2= "<<var2<<endl;
   var2=95.95;//Assignment
   cout<<"var2= "<<var2<<endl;
   //Auto Declaration and Initialization
   auto var3 {888u};
   cout<<"var3= "<<var3<<endl;
   var3=-22;//Assignment of negative number is disaster,it'll store large value
   cout<<"var3= "<<var3<<endl;
   return 0;
}
#include<iostream>
using namespace std;
int main()
{
   int condition {0};
   int condition1 {-3};
   bool bool_condition =condition;

   cout<<boolalpha;
   if(bool_condition)//Converted to boolean
       cout<<"We have a "<<bool_condition<<" in our variable."<<endl;
   else
       cout<<"We have "<<bool_condition<<" in our variable."<<endl;
   if(condition1)//Integer other than 0 is consider as boolean 1
       cout<<"We have a "<<condition1<<" in our variable."<<endl;
   else
       cout<<"We have "<<condition1<<" in our variable."<<endl;       
return 0;           
}
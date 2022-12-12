#include<iostream>
using namespace std;
int main()
{  int value {5};
   cout<<"-------Compound Assignment-------"<<endl;
   cout<<"value initially= "<<value<<endl;
   //value +=4;
   cout<<"value+=4;value= "<<(value +=4)<<endl;//parenthesis is must while using in cout
   value -=3;
   cout<<"value-=3;value= "<<value<<endl;
   value *=6;
   cout<<"value*=6;value= "<<value<<endl;
   value /=3;
   cout<<"value/=3;value= "<<value<<endl;
   value%=5;
   cout<<"value%=5;value= "<<value<<endl;
   return 0;
   }

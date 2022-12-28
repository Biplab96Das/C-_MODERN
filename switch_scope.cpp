#include<iostream>
using namespace std;
int global_var {44};
int main()
{  
  int int_condition {0};
  switch(int_condition)
  {
    case 0 : 
      cout<<"We are dealing with 0"<<endl;
      cout<<"Another statement in case of 0"<<endl;
    break;  
    case 1 :
      cout<<"We are dealing with 1"<<endl;
      cout<<"Some other statement"<<endl;
    break;  
    default :
      cout<<"We are not dealing with 0 or 1"<<endl;
      cout<<"Some other statement"<<endl;
    break;  
  }
  int condition = 1;
  switch(condition)//Any variable declared inside switch is valid in entire switch
  { int x{5};//compile time error
    case 0 :
      int y{4};//compile time error
      x=4;
      x++;
    break;
    case 1:
      int z{6};//compile time error
      y=5;
      y+=5;
    break;
    default :
       int u{8};//it's OK
       z=4;
       z++;
    break;//Optional but good practice       
  }

return 0;    
}
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
  switch(int x{5}, y{4}, z{6};condition)//Any variable declared inside switch is valid in entire switch
  { //int x{5};//compile time error     //But,if the percular case isn't executed or declared before all cases then compiler give error
    case 0 :
      //int y{4};//compile time error    //Putting curly braces around case make the variable inside local to 
      x=4;                               //that case only
      x++;
      cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
    break;
    case 1:
      //int z{6};//compile time error
      y=5;
      y+=5;
      cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
    break;
    default :
       int u{8};//it's OK
       z=4;
       z++;
       cout<<"x="<<x<<",y="<<y<<",z="<<z<<endl;
    break;//Optional but good practice       
  }

return 0;    
}
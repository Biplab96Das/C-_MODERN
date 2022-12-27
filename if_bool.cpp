#include<iostream>
using namespace std;
bool red=false;
bool green {true};
bool yellow {false};
bool police_stop {true};
int main()
{
  int number1 {55};
  int number2 {60};
  bool result =(number1<number2);//Expression yielding the condition
  cout<<boolalpha<<"Results : "<<result<<endl;
  cout<<endl;
  cout<<"Free standing if statements"<<endl;
  if(result==true)
    cout<<number1<<" is less than "<<number2<<endl;
  else if(result==false)
   cout<<number1<<" is greater than "<<number2<<endl;
 cout<<"--------------------------------------------"<<endl;    
  if(number1<number2)
    cout<<number1<<" is less than "<<number2<<endl;
  else if(number1<number2)
   cout<<number1<<" is greater than "<<number2<<endl; 
  if(green)
     if(!police_stop)
        cout<<"Go !"<<endl;
     else if(police_stop)
        cout<<"Stop !"<<endl;
  else if(red)
     cout<<"~Stop !"<<endl;
  else if(yellow)
     cout<<"Slow Down !"<<endl;             
return 0;          
}
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    bool green_light{false},red_light{true};
    if(red_light)
       cout<<"Stop!";
    else
       cout<<"Go through!";
    if(green_light)
       cout<<"You can go.";
    else
       cout<<"You cann't go."; 
    cout<<"\nRed_light: "<<red_light<<endl;
    cout<<boolalpha<<"Red_light: "<<red_light<<endl;        
  return 0;
}
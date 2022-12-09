#include<iostream>
using namespace std;
int main()
{
    bool red_light {true};
    bool green_light {false};
    cout<<green_light<<endl;    
    cout<<red_light<<endl; 
    if(green_light==true)
       cout<<"Go through "<<endl;
    else 
       cout<<"Green light is not on yet,so wait "<<endl;
    if (red_light==true)
       cout<<"Stop! "<<endl;
    else 
       cout<<"Go through "<<endl;
    boolalpha;
    cout<<green_light<<endl;    
    cout<<red_light<<endl;  
  return 0;
}
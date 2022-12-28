#include<iostream>
using namespace std;
int main()
{  cout<<"----------------without if initializer----------------------"<<endl;
   //Without if initializer
   int speed {20};
   bool go {false};
   if(go)
     {
        if(speed>5)
        cout<<"Slow Down !"<<endl;
        else
        cout<<"All good !"<<endl;
     }
    else 
     cout<<"Stop !"<<endl;
cout<<"---------------With initializer---------------------"<<endl;     
    //With if initializer
    if(int high_speed{33};go)//C++17 onward features,if initializer
    {
        if(high_speed>5)
          cout<<"Slow Down !"<<endl;
        else
          cout<<"All Good !"<<endl;  
    }
    else 
      cout<<"Stop !"<<"you are driving in "<<high_speed<<" kmh."<<endl; //Accessible in else part also.
return 0;           
}
#include<iostream>
using namespace std;
int global_var {44};
int main()
{  
   bool green {false};
   if(green)
   { global_var++;
    int car_count {23};
    cout<<"Light is green."<<car_count<<" cars on move."<<endl;
    cout<<"Global variable = "<<global_var<<endl;
   }
   else 
    { global_var ++;
      // cout<<"car count = "<<car_count<<endl;(Local to if block only,unlike if initializer)
      cout<<"Global variable = "<<global_var<<endl;
      cout<<"Light is not green.You all should stop !"<<endl;
    }
    global_var++;
    // cout<<"car count = "<<car_count<<endl;(Local to if block only)
    cout<<"Global variable = "<<global_var<<endl;
return 0;    
}
#include<iostream>
using namespace std;
bool red=false;
bool green {true};
bool yellow {false};
bool police_stop {true};
int main()
{
  if(red)
     cout<<"Stop !"<<endl;
  if(yellow)
     cout<<"Slow Down !"<<endl;
  if(green && !police_stop)
     cout<<"Go !"<<endl;
  if(green && police_stop)
     cout<<"Stop !"<<endl;
return 0;          
}
#include<iostream>
#include<string.h>
using namespace std;
const int Pen {10};
const int Marker {20};
const int Eraser {30};
const int Rectangle {40};
const int Circle {50};
const int Ellipse {60};
int main()
{
     int tool {Eraser};
  switch (tool)
    {
    case Pen :{
      cout<<"Active tool is Pen."<<endl;
     } 
      break;
    case Marker :{
      cout<<"Active tool is Marker."<<endl; 
     }
      break;
    case Eraser :{
      cout<<"Active tool is Eraser."<<endl; 
     }
      break;  
    case Rectangle :{
      cout<<"Active tool is Rectangle."<<endl; 
     }
      break;
    case Circle :{
      cout<<"Active tool is Circle."<<endl; 
     }
      break; 
    case Ellipse :{
      cout<<"Active tool is Ellipse."<<endl; 
     }
      break;                 
     default:{
      cout<<"No match found"<<endl;
     }
      break;
     }
  const int name =40;
  switch (name)
  { case name:{
      cout<<"Hello John!"<<endl;
  }
  // break;
  default:{
      cout<<"Who the hell are you?"<<endl;
    }
    break;
  }
  cout<<"Moving on......."<<endl;                
return 0;          
}
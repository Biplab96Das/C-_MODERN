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
    
for(int tool=10;tool<=70;tool+=10){
  switch (double strength=4.56;tool)//Scope of strength is switch block,switch initializer
    {
    case Pen :{
      cout<<"Active tool is Pen.Strength = "<<strength<<endl;
     } 
      break;
    case Marker :{
      cout<<"Active tool is Marker.Strength = "<<strength<<endl; 
     }
      break;
    case Eraser :{
      cout<<"Active tool is Eraser.Strength = "<<strength<<endl; 
     }
      break;  
    case Rectangle :{
      cout<<"Active tool is Rectangle.Strength = "<<strength<<endl; 
     }
      break;
    case Circle :{
      cout<<"Active tool is Circle.Strength = "<<strength<<endl; 
     }
      break; 
    case Ellipse :{
      cout<<"Active tool is Ellipse.Strength = "<<strength<<endl; 
     }
      break;                 
     default:{
      cout<<"No match found.Strength = "<<strength<<endl;
     }
      break;
     }
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
#include<iostream>
using namespace std;
int main()
{
  const int Pen {10};
  const int Marker {20};
  const int Eraser {30};
  const int Rectangle {40};
  const int Circle {50};
  const int Ellipse {60};
  int tool {Circle};
  if(tool==Pen)
    cout<<"Active tool is Pen."<<endl;
  if(tool==Marker)
    cout<<"Active tool is Marker."<<endl;
  if(tool==Eraser)
    cout<<"Active tool is Eraser."<<endl;
  if(tool==Rectangle)
    cout<<"Active tool is Rectangle."<<endl;
  if(tool==Circle)
    cout<<"Active tool is Circle."<<endl;
  if(tool==Ellipse)
    cout<<"Active tool is Ellipse."<<endl;                     
return 0;          
}
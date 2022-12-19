#include<iostream>
using namespace std;
int main()
{
  double l,w,h;
  cout<<"Welcome to box calculator. Please type in length, width and height information:"<<endl;
  cout<<"length : ";
  cin>>l;
  cout<<"width : ";
  cin>>w;
  cout<<"height : ";
  cin>>h;
  cout<<"The base area is : "<<(l*w)<<endl;
  cout<<"The volume is : "<<(l*w*h);
return 0;    
}
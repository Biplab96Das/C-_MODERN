#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char val=65;
    cout<<"Value: "<<val<<endl;
    cout<<"Value: "<<static_cast<int>(val)<<endl;
    char c1='a',c2='r',c3='r',c4='o',c5='w';
    cout<<c1<<c2<<c3<<c4<<c5<<endl;        
  return 0;
}
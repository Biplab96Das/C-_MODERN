#include<iostream>
#include<iomanip>//left,right for justification and setw(integer) is defined in this
#include<bitset>//bistset<no.of bits> is defined in this library
using namespace std;

int main()
{ 
  const unsigned int red_mask {0xFF000000};
  const unsigned int green_mask {0x00FF0000};
  const unsigned int blue_mask {0x0000FF00};
  const unsigned int alpha_mask {0x000000FF};

  unsigned int my_color {0xAABCDE00};
  //We shift to make sure the color bytes of interest is in the 
  //lower index byte position,so that we can interprete that as an integer
  cout<<hex<<showbase<<endl;
  cout<<"Red color : "<<((my_color & red_mask)>>24)<<endl;
  cout<<"Green color : "<<((my_color & green_mask)>>16)<<endl;
  cout<<"Blue color : "<<((my_color & blue_mask)>>8)<<endl;
  cout<<"Alpha color : "<<((my_color & alpha_mask)>>0)<<endl;
return 0;
}
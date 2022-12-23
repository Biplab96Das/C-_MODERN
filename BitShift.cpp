#include<iostream>
#include<bitset>
using namespace std;
int main()
{
  unsigned short int value {0xff0u};
  cout<<"Size of short int is = "<<sizeof(short int)<<endl;
  cout<<"Binary = "<<bitset<16>(value)<<",Dec= "<<value<<endl;
  
  value =static_cast<unsigned short int> (value>>1);
  cout<<"Value after right shift by 1,Binary= "<<bitset<16>(value)<<",Dec= "<<value<<endl;

  value =static_cast<unsigned short int> (value<<2);
  cout<<endl<<"Value after left shift by 2,Binary= "<<bitset<16>(value)<<",Dec= "<<value<<endl;
return 0;
}
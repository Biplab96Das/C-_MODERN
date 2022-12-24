#include<iostream>
#include<iomanip>//left,right for justification and setw(integer) is defined in this
#include<bitset>//bistset<no.of bits> is defined in this library
using namespace std;
int main()
{ 
  int col_width {20};
  unsigned short int val1 {0x3};
  unsigned short int val2 {0x5};
  cout<<left;//Left justified,setfill(' ') is same as default,giving blank
  //1 byte bit-wise representation of value 1 and value 2
  cout<<setw(col_width)<<"value1 is = "<<setw(col_width)<<bitset<8>(val1)<<endl;
  cout<<setw(col_width)<<"value2 is = "<<setw(col_width)<<bitset<8>(val2)<<endl;
  //Bit-wise AND operator
  cout<<setw(col_width)<<"value1&value2 is ="<<setw(col_width)<<bitset<8>(val1 & val2)<<endl;
  //Bit-wise OR operator
  cout<<setw(col_width)<<"value1|value2 is ="<<setw(col_width)<<bitset<8>(val1 | val2)<<endl;
  //Bit-wise NOT operator
  cout<<setw(col_width)<<"~value1 is = "<<setw(col_width)<<bitset<8>(~val1)<<endl;
  //Bit-wise XOR operator
  cout<<setw(col_width)<<"value1^value2 is ="<<setw(col_width)<<bitset<8>(val1 ^ val2)<<endl;

return 0;
}
#include<iostream>
#include<iomanip>//left,right for justification and setw(integer) is defined in this
#include<bitset>//bistset<no.of bits> is defined in this library
using namespace std;
int main()
{ 
  const int column_width {20};
  unsigned char var {0b00000000};//Sandbox variable,starts off all bits off
  //Highlight position for bit of interest with 1
  //Mask other position with 0
  const unsigned char mask_bit_0 {0b00000001};
  const unsigned char mask_bit_1 {0b00000010};
  const unsigned char mask_bit_2 {0b00000100};
  const unsigned char mask_bit_3 {0b00001000};
  const unsigned char mask_bit_4 {0b00010000};
  const unsigned char mask_bit_5 {0b00100000};
  const unsigned char mask_bit_6 {0b01000000};
  const unsigned char mask_bit_7 {0b10000000};
  cout<<left;
  cout<<setw(column_width)<<"Var : "<<setw(column_width)<<bitset<8>(var)<<endl;
  //Set a few bits ,make them 1's regardless of what's in there
  //SETTINGS BITS : Settings bits |= with mask
  //Set bit 1
  cout<<"Settings bit in position 1 : "<<endl;
  var |=mask_bit_1;
  cout<<setw(column_width)<<"Var : "<<setw(column_width)<<bitset<8>(var)<<endl;

  //Set bit 5
  cout<<"Settings bit in position 5 : "<<endl;
  var |=mask_bit_5;
  cout<<setw(column_width)<<"Var : "<<setw(column_width)<<bitset<8>(var)<<endl;

  //RESTTING : set to 0
  //Resetting : &=(~mask)
  //Reset bit 1
  cout<<"Resetting bit position 1 : "<<endl;
  var &=(~mask_bit_1);
  cout<<setw(column_width)<<"Var : "<<setw(column_width)<<bitset<8>(var)<<endl;
  //Reset bit 5
  cout<<"Restting bit position 5 : "<<endl;
  var &=(~mask_bit_5);
  cout<<setw(column_width)<<"Var : "<<setw(column_width)<<bitset<8>(var)<<endl;
  //Setting all bits
  cout<<"Setting all bits"<<endl;
  var |=(mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
  cout<<setw(column_width)<<"Var : "<<setw(column_width)<<bitset<8>(var)<<endl;
  //Restting bits at position 0,2,4,6
  cout<<"Restting bits at position 0,2,4,6"<<endl;
  var &=~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
  cout<<setw(column_width)<<"Var : "<<setw(column_width)<<bitset<8>(var)<<endl;
  //Check state of a bit
  cout<<"Checking the state of each bit position : "<<endl;
  cout<<"bit0 is : "<<((var & mask_bit_0)>>0)<<endl;
  cout<<"bit1 is : "<<((var & mask_bit_1)>>1)<<endl;
  cout<<"bit2 is : "<<((var & mask_bit_2)>>2)<<endl;
  cout<<"bit3 is : "<<((var & mask_bit_3)>>3)<<endl;
  cout<<"bit4 is : "<<((var & mask_bit_4)>>4)<<endl;
  cout<<"bit5 is : "<<((var & mask_bit_5)>>5)<<endl;
  cout<<"bit6 is : "<<((var & mask_bit_6)>>6)<<endl;
  cout<<"bit7 is : "<<((var & mask_bit_7)>>7)<<endl;
  cout<<"Checking the state of the bits in true or false : "<<endl;
  cout<<boolalpha;
  cout<<"bit0 is : "<<static_cast<bool>((var & mask_bit_0)>>0)<<endl;
  cout<<"bit1 is : "<<static_cast<bool>((var & mask_bit_1)>>1)<<endl;
  cout<<"bit2 is : "<<static_cast<bool>((var & mask_bit_2)>>2)<<endl;
  cout<<"bit3 is : "<<static_cast<bool>((var & mask_bit_3)>>3)<<endl;
  cout<<"bit4 is : "<<static_cast<bool>((var & mask_bit_4)>>4)<<endl;
  cout<<"bit5 is : "<<static_cast<bool>((var & mask_bit_5)>>5)<<endl;
  cout<<"bit6 is : "<<static_cast<bool>((var & mask_bit_6)>>6)<<endl;
  cout<<"bit7 is : "<<static_cast<bool>((var & mask_bit_7)>>7)<<endl;
  //Toggle bits 
  //Toggle : var^mask
  cout<<"Toggle bit 0 : "<<endl;
  var ^=mask_bit_0;
  cout<<setw(column_width)<<"Var : "<<setw(column_width)<<bitset<8>(var)<<endl;

  cout<<"Toggle bit 7 : "<<endl;
  var ^=mask_bit_7;
  cout<<setw(column_width)<<"Var : "<<setw(column_width)<<bitset<8>(var)<<endl;

return 0;
}
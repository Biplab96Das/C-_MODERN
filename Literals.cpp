#include<iostream>
#include<string>
using namespace std;
//*Literal : Data that is directly represented in code,without going through some variable
//stored in memory
int main()
{ //Literal type : u and l combinations for unsigned and long
  unsigned char unsigned_char {53u};//555u will fail because range of unsigned char is [0-255]
  //2 bytes                         //Narrowing error---^
  short short_var {-32768};//No special literal types for short
  short int short_int {455};//No special literal types for short int
  signed short signed_short {122};
  signed short int signed_short_int {-456};
  unsigned short int unsigned_short_int {5678U};
  //4 bytes
  const int int_var {55};
  signed signed_var {66};
  signed int signed_var_int {77};
  unsigned int unsigned_int {555U};
  //4 or 8 bytes 
  long long_var {88L};//4 or 8 bytes
  long int long_int {33L};
  signed long signed_long {44l};
  signed long int signed_long_int {44l};
  unsigned long int unsigned_long_int {555ul};
  //8 bytes
  long long long_long {888ll};
  long long int long_long_int {999ll};
  signed long long signed_long_long {444ll};
  signed long long int signed_long_long_int {1234ll};
  //grouping Numbers C++14 onwards
  unsigned int prize {1'500'00'0u};
  cout<<"Signed long long int = "<<signed_long_long_int<<endl;
  cout<<"The prize is "<<prize<<endl;
  //unsigned char num {555u};//Narrowing Error,() make compilation error silent.{} should be used.
  //unsigned int game_score {-20};//{} will be safer as it guranteed compilation error.
  //cout<<num<<" "<<game_score<<endl;
  
  //With Number System: Hex pefix with 0x
  unsigned int hex_number {0x22BU};//Decimal 555
  int hex_number2 {0x400};//Decimal 1024
  cout<<hex<<"Hexadecimal number = "<<hex_number<<endl;
  cout<<dec<<"Hexadecimal number2 = "<<hex_number2<<endl;
  //With Number System: Binary prefix with 0b
  unsigned int binary_number {0b111111101u};
  cout<<dec<<"Binary Number is = "<<binary_number<<endl;
  //With Octal Number System: Octal prefix with 0
  int Octal {01755};
  cout<<"Octal Number is = "<<Octal<<endl;
  char char_literal {'c'};
  int number_literal {15};
  float fractional_literal {1.5f};
  string string_literal {"Hit the road"};
  cout<<"Char Literal = "<<char_literal<<endl;
  cout<<"Number Literal = "<<number_literal<<endl;
  cout<<"Fractional Literal = "<<fractional_literal<<endl;
  cout<<"String Literal = "<<string_literal<<endl;
return 0;    
}
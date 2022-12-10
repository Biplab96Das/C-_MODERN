#include<iostream>
using namespace std;
int main()
{ //char stored 256 bits ASCII Characters,1 byte=8-bits
   char val=65;
   char v=val+32;
   char n='5';
   cout<<val<<"="<<static_cast<int>(val)<<" and "<<v<<"="<<static_cast<int>(val)+32<<endl;
   cout<<"No.5="<<'5'-'0'<<"="<<static_cast<int>(n)<<endl;
   return 0;
}
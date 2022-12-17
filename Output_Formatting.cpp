#include<iostream>
#include<iomanip>//setw(integer) is defined in <iomanip> header 
using namespace std;
int main()
{  int col_width=20;
   cout<<left;//Left)justified
   cout<<setfill('-');//Fill the gap by default as blanks.'-' replaces that gaps.
   cout<<setw(col_width)<<"Firsname"<<setw(col_width)<<"Lastname"<<setw(5)<<"Age"<<endl;
   cout<<setw(col_width)<<"Biplab"<<setw(col_width)<<"Das"<<setw(5)<<"26"<<endl;
   cout<<setw(col_width)<<"Nilmoni"<<setw(col_width)<<"Das"<<setw(5)<<"26"<<endl;
   cout<<setw(col_width)<<"Vivek"<<setw(col_width)<<"Sukla"<<setw(5)<<"28"<<endl;
   cout<<setw(col_width)<<"Saurabh"<<setw(col_width)<<"Singh"<<setw(5)<<"26"<<endl;
   cout<<setw(col_width)<<"Divyansh"<<setw(col_width)<<"Rathod"<<setw(5)<<"25"<<endl;
 return 0;  
}
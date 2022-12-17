#include<iostream>
#include<iomanip>
using namespace std;
int main()
{  cout<<"Hello"<<flush<<" ";//Flush tranfers input data directly to output without 
   cout<<"World"<<flush<<endl;//Sending it to the buffer
   cout<<"------------------"<<endl;
   cout<<"Hello"<<endl;//endl gives new line
   cout<<"World"<<endl;
   cout<<"Hello\n";//\n gives new line
   cout<<"World\n";
 return 0;  
}
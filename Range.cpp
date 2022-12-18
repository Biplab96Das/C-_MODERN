#include<iostream>
#include<limits>
using namespace std;
int main()
{  
  cout<<"Range of short integer is from "<<numeric_limits<short>::min()<<" to "<<numeric_limits<short>::max()<<endl;
  cout<<"Range of unsigned integer is from "<<numeric_limits<unsigned short>::min()<<" to "<<numeric_limits<unsigned short>::max()<<endl;
  cout<<"Range of integer is from "<<numeric_limits<int>::min()<<" to "<<numeric_limits<int>::max()<<endl;
  cout<<"Range of unsigned integer is from "<<numeric_limits<unsigned int>::min()<<" to "<<numeric_limits<unsigned int>::max()<<endl;
  cout<<"Range of float is from "<<numeric_limits<float>::min()<<" to "<<numeric_limits<float>::max()<<endl;
  cout<<"Range of double is from "<<numeric_limits<double>::min()<<" to "<<numeric_limits<double>::max()<<endl;
  cout<<"Range of long integer is from "<<numeric_limits<long int>::min()<<" to "<<numeric_limits<long int>::max()<<endl;
  cout<<"Range of unsigned long integer is from "<<numeric_limits<unsigned long>::min()<<" to "<<numeric_limits<unsigned long>::max()<<endl;
  cout<<"Range of long long integer is from "<<numeric_limits<long long>::min()<<" to "<<numeric_limits<long long>::max()<<endl;
  cout<<"Range of long integer is from "<<numeric_limits<long int>::min()<<" to "<<numeric_limits<long int>::max()<<endl;
  cout<<"Range of long double is from "<<numeric_limits<long double>::min()<<" to "<<numeric_limits<long double>::max()<<endl;
 return 0;  
}
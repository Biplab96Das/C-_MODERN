#include<iostream>
using namespace std;
int main()
{
  double a {12.5};
  double b {35.8};
  auto sum1=static_cast <int> (a) +static_cast <int> (b);//C++-type conversion
  auto sum2=static_cast <int>(a+b);//C++-type conversion
  auto sum3=(int)(a+b);//Old C-type conversion
  cout<<"sum1= "<<sum1<<" "<<"sum2= "<<sum2<<" sum3= "<<sum3<<endl;
return 0;
}
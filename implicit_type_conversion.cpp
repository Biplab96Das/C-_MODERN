#include<iostream>
using namespace std;
int main()
{
    double a {45.6};
    int b {10};
    int d=a;//Implicit type conversion from int to double
    auto c=a*b;//Implicit Type conversion 
    cout<<"type conversion valueof a*b is "<<c<<endl;
    cout<<"size of a*b is "<<sizeof(c)<<endl;
    cout<<"d= "<<d<<endl;
    cout<<"Size of d is "<<sizeof(d)<<endl;
  return 0;  
}
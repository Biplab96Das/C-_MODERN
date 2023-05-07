#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  //Declare and initialize the variables
	float number1 {1.1234567890F};//7-bit is correct
	double number2 {1.12345678901234527890};//15
	long double number3 {1.12345678901234567890l};
	float number(192400023);//7-bit precision
	cout<<setprecision(20);
	cout<<"Number1 is "<<number1<<endl;
	cout<<"Number2 is "<<number2<<endl;
	cout<<"Number3 is "<<number3<<endl;
	cout<<"Number is "<<number<<endl;
	//Scientific Notation
	double num5 {192400023};
	double num6 {1.92400023e8};
	long double num7 {0.00000003498L};
	long double num8 {3498e-11L};
	cout<<num5<<" "<<num6<<" "<<num7<<" "<<num8<<endl;
	//NaN or Infinity(+/-)
    double num9 {8.5};
    double num10 {};//Initialized to 0
    double num11 {};
    cout<<num9<<"/"<<num10<<"="<<num9/num10<<endl;//inf
    cout<<num10<<"/"<<num11<<"="<<num10/num11<<endl;//nan
	return 0;
}

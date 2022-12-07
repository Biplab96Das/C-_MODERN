#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float number1 {1.12345678901234567890f};//7-digit precicion in my PC
    double number2 {2.12345678901234567890};//15+ digit precicion in my PC
    long double number3 {3.12345678901234567890L};//15+ digit precicion in my PC
    cout<<setprecision(24)<<endl;
    cout<<sizeof(number1)<<" "<<sizeof(number2)<<" "<<sizeof(number3)<<endl;
    cout<<number1<<" "<<number2<<" "<<number3<<endl;
    return 0;
}

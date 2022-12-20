#include<iostream>
using namespace  std;
int main()
{
   constexpr int a {5};
   constexpr int b {a};//Works fine

   const int c {12};
   constexpr int d {3*c};//Works fine

   int e {9};//Not defined at compile-Time
   //constexpr int f {2*e};//Compilation error because e is evalualted at run-time
                           //and f is evaluated at compile-time
   static_assert (d==36);
  //static_assert (e==9);//It gives compile time error,saying e is not constexpr 

  cout<<"a,b,c,d,e are "<<a<<","<<b<<","<<c<<","<<d<<","<<e<<",respectively."<<endl;
  return 0;
} 

#include<iostream>
using namespace std;
int main()
{
   int a {6};
   int b {3};
   int c {8};
   int d {9};
   int e {3};
   int f {2};
   int g {5};
   int res = a + b * c - d / e -f + g;
   int exp = a / b * c + d - e + f;
   cout<<"First expression = a + b * c - d / e -f - g = "<<res<<endl;
   cout<<"Second expression = a / b * c + d - e + f = "<<exp<<endl;
   return 0;
   }
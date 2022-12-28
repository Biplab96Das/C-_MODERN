#include<iostream>
using namespace std;
int main()
{  int max {};
   int a {35};
   int b {20};
   cout<<"Using regular if condition"<<endl;
   if(a>b)
    max=a;
   else 
    max=b;  
   cout<<"Max = "<<max<<endl;
   cout<<"----------------------------"<<endl;
   cout<<"Using ternary operator"<<endl;
   a = 45;
   b=78;
   max=(a>b)?a:b;
   cout<<"Max = "<<max<<endl;
return 0;           
}
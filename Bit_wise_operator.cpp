#include<iostream>
using namespace std;

int main()
{
   bool a {true};
   bool b {false};
   bool c {true};
   cout<<boolalpha;//For using operators we must include brackets 
   cout<<"a= "<<a<<" "<<"b= "<<b<<" "<<"c= "<<c<<endl;
   cout<<"a&&b= "<<(a&&b)<<" "<<"a&&c= "<<(a&&c)<<" "<<"b&&c= "<<(b&&c)<<" "<<"a&&b&&c= "<<(a&&b&&c)<<endl;
   cout<<"a||b= "<<(a||b)<<" "<<"b||c= "<<(b||c)<<"c||a= "<<(c||a)<<" "<<"a||b||c= "<<(a||b||c)<<endl;
   cout<<"!a= "<<(!a)<<" "<<"!b= "<<(!b)<<" "<<"!c= "<<(!c)<<endl; 
}
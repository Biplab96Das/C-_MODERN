#include<iostream>
using namespace std;
//auto keyword let the compiler decide what is the type of the variable.
int main()
{  auto var1 {12};//int-4bytes
   auto var2 {13.0};//double-8bytes
   auto var3 {14.0f};//float-4bytes
   auto var4 {15.0l};//long-double-16bytes
   auto var5 {'e'};//char-1byte
   auto var6 {123u};//unsigned or unsigned int-4bytes
   auto var7 {123ul};//unsigned long (int)-4bytes
   auto var8 {123ll};//long-long (int)-8bytes
   cout<<sizeof(var1)<<" "<<sizeof(var2)<<" "<<sizeof(var3)<<" "
   <<sizeof(var4)<<" "<<sizeof(var5)<<" "<<sizeof(var6)<<" "<<sizeof(var7)<<" "<<sizeof(var8)<<endl;

   return 0;
}
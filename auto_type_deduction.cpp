#include<iostream>
#include<iomanip>
#include<typeinfo>
using namespace std;
int main()
{
   auto var1{12};
   auto var2{13.0};
   auto var3{14.0f};
   auto var4{15.0l};
   auto var5{'e'};
   auto var6{123u};
   auto var7{123ul};
   auto var8{123ll};  
   cout<<"var1: "<<typeid(var1).name()<<",var2: "<<typeid(var2).name()<<",var3: "<<typeid(var3).name()<<endl;
   cout<<"var4: "<<typeid(var4).name()<<",var5: "<<typeid(var5).name()<<",var6: "<<typeid(var6).name()<<endl;
   cout<<"var7: "<<typeid(var7).name()<<",var8: "<<typeid(var8).name()<<endl;     
  return 0;
}
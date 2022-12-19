#include<iostream>
#include<math.h>
using namespace std;
int main()
{  
 short int var1 {10};
 short int var2 {20};
 char var3 {30};
 char var4 {40};
 cout<<sizeof(var1)<<" bytes for var1. "<<sizeof(var2)<<" bytes for var2. "<<sizeof(var3)<<" bytes for var3. "<<sizeof(var4)<<" bytes for var4. "<<endl;
 cout<<"var1= "<<var1<<","<<"var2= "<<var2<<","<<"var3= "<<var3<<","<<"var4= "<<var4<<"."<<endl;
 auto result1 =var1 + var2;
 auto result2 =var3 +var4;
 cout<<"result1= "<<result1<<","<<"result2= "<<result2<<"."<<endl;
 cout<<sizeof(result1)<<" bytes of result1. "<<sizeof(result2)<<" bytes of result2."<<endl;
 cout<<"Arithmatic operation can only be done on data-types of size >= 4 bytes."<<endl;
 return 0;  
}
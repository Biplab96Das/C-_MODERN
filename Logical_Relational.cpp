#include<iostream>
using namespace std;

int main()
{  bool a {true};
   int d {45};
   int e {20};
   int f {11};
   // Combination of logical and relational operator
   cout<<"d= "<<d<<endl;
   cout<<"e= "<<e<<endl;
   cout<<"f= "<<f<<endl;
   cout<<"((d>e)&&(d>f))= "<<((d>e)&&(d>f))<<endl;
   cout<<"((d==e) || (e<=f))= "<<((d==e) || (e<=f))<<endl;
   cout<<"((d<e) || (e>f))= "<<((d<e) || (e>f))<<endl;
   cout<<"((f>e) || (d<f))= "<<((f>e) || (d<f))<<endl;
   cout<<"((d>f) || (f<=d))= "<<((d>f) || (f<=d))<<endl;
   cout<<"((d>e) || (d<=f))= "<<((d>e) || (d<=f))<<endl;
   cout<<"((!a) || (d==e))= "<<((!a) || (d==e))<<endl;
 return 0;  
}
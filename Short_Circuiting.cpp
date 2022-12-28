#include<iostream>
using namespace std;
bool Car()
{
  cout<<"Car function is running"<<endl;
  return false;
}
bool House()
{
  cout<<"House function is running"<<endl;
  return false;
}
bool Job()
{
  cout<<"Job function is running"<<endl;
  return true;
}
bool Spouse()
{
  cout<<"Spouse function is running"<<endl;
  return true;
}
int main()
{
  if(Car() && House() && Spouse() && Job())//Short-Circuiting of AND:when Compiler see first 0 it doesn't evaluate 
  //the chain of OR's and simply returns 0 for the entire expression.
        cout<<"I am Happy"<<endl;
  else if(Car() || House() || Spouse() || Job())//Short-Circuiting of OR:when Compiler see first 1 it doesn't evaluate
  //the chain of OR's and simply returns 1 for the entire expression.
      cout<<"I am on my way to be Happy"<<endl;
   else
      cout<<"I am not happy"<<endl;     

return 0;          
}
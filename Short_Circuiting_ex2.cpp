#include<iostream>
using namespace std;
int main()
{
  bool a {true};
  bool b {true};
  bool c {true};
  bool d {false}; 
  
  bool p{false};
  bool q{false};
  bool r{false};
  bool s{true};

  //AND : if one of the value is 0 the entire expression is 0
  bool result = (a && b && c && d);
  cout<<"Result = "<<noboolalpha<<result<<endl;
  //OR : if one of the value is 1 the entire expression is 1
  result= (p || q || r || s);
  cout<<"Result = "<<boolalpha<<result<<endl;    
return 0;          
}
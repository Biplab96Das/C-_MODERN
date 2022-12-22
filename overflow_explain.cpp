#include<iostream>
using namespace std;
int main()
{
  unsigned char data {250};

  ++data;
  cout<<" data : "<<static_cast <int> (data)<<endl;

    ++data;
  cout<<" data : "<<static_cast <int> (data)<<endl;

      ++data;
  cout<<" data : "<<static_cast <int> (data)<<endl;

        ++data;
  cout<<" data : "<<static_cast <int> (data)<<endl;

          ++data;
  cout<<" data : "<<static_cast <int> (data)<<endl;

            ++data;
  cout<<" data : "<<static_cast <int> (data)<<endl;
return 0;
}